namespace System.Linq.SourceCode.C.Ansi

open System
open System.IO
open System.Collections.Generic
open System.Linq;

open System.Linq.SourceCode


type public NameDeclarator(value : string) = 
    inherit DeclaratorBase()
    let mutable _value = value

    member this.Value
        with get() = _value
        and set(value) = _value <- value
    
    override this.Type
        with get() = DeclaratorType.Name
            
    override this.ToString() = 
        this.Value
        
    override this.Descendants() =
        Enumerable.Empty()
        
    override this.StructureEquals(node : AstNode) =
        match node with
        | :? AnyDeclarator -> true
        | :? NameDeclarator -> true
        | _ -> false


type ArrayDeclarator(declarator : DeclaratorBase , size : ExpressionBase ) = 
    inherit DeclaratorBase()     
    let mutable _declarator = declarator
    let mutable _size = size
    
    member this.Declarator
        with get() = _declarator
        and set(value) = _declarator <- value
    
    member this.Size
        with get() = _size
        and set(value) = _size <- value

    override this.Type
        with get() = DeclaratorType.Array
        
    override this.ToString() =
        String.Format("{0}[{1}]", this.Declarator, this.Size);
        
    override this.Descendants() =
        seq { 
            if this.Declarator <> null then
                yield this.Declarator :> AstNode
                for d in this.Declarator.Descendants() -> d
            if this.Size <> null then
                yield this.Size :> AstNode
                for d in this.Size.Descendants() -> d
        }
    
    override this.StructureEquals(node : AstNode) =
        match node with
        | :? AnyDeclarator -> true
        | :? ArrayDeclarator -> 
            let n = node :?> ArrayDeclarator
            AstNodeEqualityComparer.Structure.Equals(this.Declarator, n.Declarator) && 
            AstNodeEqualityComparer.Structure.Equals(this.Size, n.Size)
        | _ -> false
        
        
type FunctionDeclarator(declarator : DeclaratorBase, parameters : IEnumerable<ParameterBase>, isVararg : bool ) = 
    inherit DeclaratorBase()
    let mutable _declarator = declarator
    let _parameters = if parameters <> null then parameters.ToList() else List<ParameterBase>()
    let mutable _isVararg = isVararg
    
    member this.Declarator
        with get() = _declarator
        and set(value) = _declarator <- value
        
    member this.Parameters
        with get() = _parameters
    
    member this.IsVararg
        with get() = _isVararg
        and set(value) = _isVararg <- value
            
    override this.Type
        with get() = DeclaratorType.Function
        
    override this.ToString() = 
        String.Format("{0}({1}{2})", this.Declarator, String.Join(", ", this.Parameters.Select(fun p -> p.ToString()).ToArray()), if this.IsVararg then (if (this.Parameters.Count > 0) then ", ..." else "...") else String.Empty )

    override this.Descendants() =
        seq { 
            if this.Declarator <> null then
                yield this.Declarator :> AstNode
                for d in this.Declarator.Descendants() -> d
            for p in this.Parameters do
                yield p :> AstNode
                for d in p.Descendants() -> d
        }
    
    override this.StructureEquals(node : AstNode) =
        match node with
        | :? AnyDeclarator -> true
        | :? FunctionDeclarator -> 
            let n = node :?> FunctionDeclarator
            AstNodeEqualityComparer.Structure.Equals(this.Declarator, n.Declarator) && 
            (this.IsVararg = n.IsVararg) && 
            AstNodeEqualityComparer.Structure.SequenceEqual(this.Parameters, n.Parameters)
        | _ -> false    


type PointerDeclarator(pointer : PointerBase , declarator : DeclaratorBase) = 
    inherit DeclaratorBase()     
    let mutable _declarator = declarator
    let mutable _pointer = pointer
    
    member this.Declarator
        with get() = _declarator
        and set(value) = _declarator <- value
    
    member this.Pointer
        with get() = _pointer
        and set(value) = _pointer <- value
        
    override this.Type
        with get() = DeclaratorType.Pointer
        
    override this.ToString() =
        String.Format("{0} {1}", this.Pointer, this.Declarator)

    override this.Descendants() =
        seq { 
            if this.Pointer <> null then
                yield this.Pointer :> AstNode
                for d in this.Pointer.Descendants() -> d
            if this.Declarator <> null then
                yield this.Declarator :> AstNode
                for d in this.Declarator.Descendants() -> d
        }
        
    override this.StructureEquals(node : AstNode) =
        match node with
        | :? AnyDeclarator -> true
        | :? PointerDeclarator -> 
            let n = node :?> PointerDeclarator
            AstNodeEqualityComparer.Structure.Equals(this.Pointer, n.Pointer) && 
            AstNodeEqualityComparer.Structure.Equals(this.Declarator, n.Declarator)
        | _ -> false    
    


type IdentifierListDeclarator(declarator : DeclaratorBase , identifiers : IEnumerable<string>) = 
    inherit DeclaratorBase()
    let mutable _declarator = declarator
    let _identifiers = if identifiers <> null then identifiers.ToList() else List<string>()
    
    member this.Declarator
        with get() = _declarator
        and set(value) = _declarator <- value
        
    member this.Identifiers
        with get() = _identifiers
            
    override this.Type
        with get() = DeclaratorType.IdentifierList
        
    override this.ToString() = 
        String.Format("({0}({1})", this.Declarator, String.Join(", ", this.Identifiers.Select(fun p -> p.ToString()).ToArray()))

    override this.Descendants() =
        seq { 
            if this.Declarator <> null then
                yield this.Declarator :> AstNode
                for d in this.Declarator.Descendants() -> d
        }
        
    override this.StructureEquals(node : AstNode) =
        match node with
        | :? AnyDeclarator -> true
        | :? IdentifierListDeclarator -> 
            let n = node :?> IdentifierListDeclarator
            AstNodeEqualityComparer.Structure.Equals(this.Declarator, n.Declarator) && 
            (this.Identifiers.Count = n.Identifiers.Count)
        | _ -> false   
        

type InitDeclarator(declarator : DeclaratorBase, initializer : InitializerBase) = 
    inherit DeclaratorBase()     
    let mutable _declarator = declarator
    let mutable _initializer = initializer
    
    member this.Declarator
        with get() = _declarator
        and set(value) = _declarator <- value
    
    member this.Initializer
        with get() = _initializer
        and set(value) = _initializer <- value
    
    override this.Type
        with get() = DeclaratorType.Init
        
    override this.ToString() =
        if this.Initializer = null then this.Declarator.ToString()
        else String.Format("{0}={1}", this.Declarator, this.Initializer)

    override this.Descendants() =
        seq { 
            if this.Declarator <> null then
                yield this.Declarator :> AstNode
                for d in this.Declarator.Descendants() -> d
            if this.Initializer <> null then
                yield this.Initializer :> AstNode
                for d in this.Initializer.Descendants() -> d
        }
    
    override this.StructureEquals(node : AstNode) =
        match node with
        | :? AnyDeclarator -> true
        | :? InitDeclarator -> 
            let n = node :?> InitDeclarator
            AstNodeEqualityComparer.Structure.Equals(this.Declarator, n.Declarator) && 
            AstNodeEqualityComparer.Structure.Equals(this.Initializer, n.Initializer)
        | _ -> false     


type PointerAbstractDeclarator(pointer : PointerBase , declarator : DeclaratorBase) = 
    inherit DeclaratorBase()     
    let mutable _declarator = declarator
    let mutable _pointer = pointer
    
    new(pointer : PointerBase) = PointerAbstractDeclarator(pointer, null)
    
    member this.Declarator
        with get() = _declarator
        and set(value) = _declarator <- value
    
    member this.Pointer
        with get() = _pointer
        and set(value) = _pointer <- value
        
    override this.Type
        with get() = DeclaratorType.PointerAbstract
    
    override this.ToString() =
        String.Format("{0} {1}", this.Pointer, this.Declarator)

    override this.Descendants() =
        seq { 
            if this.Pointer <> null then
                yield this.Pointer :> AstNode
                for d in this.Pointer.Descendants() -> d
            if this.Declarator <> null then
                yield this.Declarator :> AstNode
                for d in this.Declarator.Descendants() -> d
        }  
        
    override this.StructureEquals(node : AstNode) =
        match node with
        | :? AnyDeclarator -> true
        | :? PointerAbstractDeclarator -> 
            let n = node :?> PointerAbstractDeclarator
            AstNodeEqualityComparer.Structure.Equals(this.Declarator, n.Declarator) && 
            AstNodeEqualityComparer.Structure.Equals(this.Pointer, n.Pointer)
        | _ -> false     


type ArrayAbstractDeclarator(declarator : DeclaratorBase, size : ExpressionBase) = 
    inherit DeclaratorBase()     
    let mutable _declarator = declarator
    let mutable _size = size
    
    member this.Declarator
        with get() = _declarator
        and set(value) = _declarator <- value
    
    member this.Size
        with get() = _size
        and set(value) = _size <- value
    
    override this.Type
        with get() = DeclaratorType.ArrayAbstract
        
    override this.ToString() =
        String.Format("{0}[{1}]", this.Declarator, this.Size);

    override this.Descendants() =
        seq { 
            if this.Declarator <> null then
                yield this.Declarator :> AstNode
                for d in this.Declarator.Descendants() -> d
            if this.Size <> null then
                yield this.Size :> AstNode
                for d in this.Size.Descendants() -> d
        }  
    
    override this.StructureEquals(node : AstNode) =
        match node with
        | :? AnyDeclarator -> true
        | :? ArrayAbstractDeclarator -> 
            let n = node :?> ArrayAbstractDeclarator
            AstNodeEqualityComparer.Structure.Equals(this.Declarator, n.Declarator) && 
            AstNodeEqualityComparer.Structure.Equals(this.Size, n.Size)
        | _ -> false        


type FunctionAbstractDeclarator(declarator : DeclaratorBase, parameters : IEnumerable<ParameterBase>, isVararg : bool ) = 
    inherit DeclaratorBase()
    let mutable _declarator = declarator
    let _parameters = if parameters <> null then parameters.ToList() else List<ParameterBase>()
    let mutable _isVararg = isVararg
    
    member this.Declarator
        with get() = _declarator
        and set(value) = _declarator <- value
        
    member this.Parameters
        with get() = _parameters
    
    member this.IsVararg
        with get() = _isVararg
        and set(value) = _isVararg <- value
    
    override this.Type
        with get() = DeclaratorType.FunctionAbstract
        
    override this.ToString() = 
        String.Format("{0}({1}{2})", this.Declarator, String.Join(", ", this.Parameters.Select(fun p -> p.ToString()).ToArray()), if this.IsVararg then (if (this.Parameters.Count > 0) then ", ..." else "...") else String.Empty )

    override this.Descendants() =
        seq { 
            if this.Declarator <> null then
                yield this.Declarator :> AstNode
                for d in this.Declarator.Descendants() -> d
            for p in this.Parameters do
                yield p :> AstNode
                for d in p.Descendants() -> d
        } 
    
    override this.StructureEquals(node : AstNode) =
        match node with
        | :? AnyDeclarator -> true
        | :? FunctionAbstractDeclarator -> 
            let n = node :?> FunctionAbstractDeclarator
            AstNodeEqualityComparer.Structure.Equals(this.Declarator, n.Declarator) && 
            (this.IsVararg = n.IsVararg) && 
            AstNodeEqualityComparer.Structure.SequenceEqual(this.Parameters, n.Parameters)
        | _ -> false        
             

type StructureDeclarator(declarator : DeclaratorBase, expression : ExpressionBase) = 
    inherit DeclaratorBase()     
    let mutable _declarator = declarator
    let mutable _expression = expression
    
    member this.Declarator
        with get() = _declarator
        and set(value) = _declarator <- value
    
    member this.Expression
        with get() = _expression
        and set(value) = _expression <- value

    override this.Type
        with get() = DeclaratorType.Structure
    
    override this.ToString() =
        if this.Expression = null then this.Declarator.ToString()
        else String.Format("{0}:{1}", this.Declarator, this.Expression);
        
    override this.Descendants() =
        seq { 
            if this.Declarator <> null then
                yield this.Declarator :> AstNode
                for d in this.Declarator.Descendants() -> d
            if this.Expression <> null then
                yield this.Expression :> AstNode
                for d in this.Expression.Descendants() -> d
        }

    override this.StructureEquals(node : AstNode) =
        match node with
        | :? AnyDeclarator -> true
        | :? StructureDeclarator -> 
            let n = node :?> StructureDeclarator
            AstNodeEqualityComparer.Structure.Equals(this.Declarator, n.Declarator) && 
            AstNodeEqualityComparer.Structure.Equals(this.Expression, n.Expression)
        | _ -> false   
