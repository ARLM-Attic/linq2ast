namespace System.Linq.SourceCode.C.Ansi

open System
open System.IO
open System.Collections.Generic
open System.Linq;

open System.Linq.SourceCode


type Parameter(specifier : SpecifierBase, declarator : DeclaratorBase) = 
    inherit ParameterBase()     
    let mutable _declarator = declarator
    let mutable _specifier = specifier
    
    new(specifier : SpecifierBase) = Parameter(specifier, null)
    
    member this.Declarator
        with get() = _declarator
        and set(value) = _declarator <- value
    
    member this.Specifier
        with get() = _specifier
        and set(value) = _specifier <- value
    
    override this.ToString() =
        String.Format("{0} {1}", this.Declarator, this.Specifier);

    override this.Descendants() =
        seq { 
            if this.Specifier <> null then
                yield this.Specifier :> AstNode
                for d in this.Specifier.Descendants() -> d
            if this.Declarator <> null then
                yield this.Declarator :> AstNode
                for d in this.Declarator.Descendants() -> d
        }
        
    override this.StructureEquals(node : AstNode) =
        match node with
        | :? AnyParameter -> true
        | :? Parameter -> 
            let n = node :?> Parameter
            AstNodeEqualityComparer.Structure.Equals(this.Specifier, n.Specifier) && 
            AstNodeEqualityComparer.Structure.Equals(this.Declarator, n.Declarator)
        | _ -> false