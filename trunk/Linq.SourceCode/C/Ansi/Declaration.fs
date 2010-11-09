namespace System.Linq.SourceCode.C.Ansi

open System
open System.IO
open System.Collections.Generic
open System.Linq;
open Microsoft.FSharp.Text.Lexing

open System.Linq.SourceCode


type FunctionDeclaration(specifier : SpecifierBase, declarator : DeclaratorBase , declarations : IEnumerable<DeclarationBase>, body : StatementBase) = 
    inherit DeclarationBase()
    let mutable _specifier = specifier
    let mutable _declarator = declarator
    let _declarations = if declarations <> null then declarations.ToList() else List<DeclarationBase>()
    let mutable _body = body
    
    member this.Specifier
        with get() = _specifier
        and set(value) = _specifier <- value
    
    member this.Declarator
        with get() = _declarator
        and set(value) = _declarator <- value
    
    member this.Declarations
        with get() = _declarations
        
    member this.Body
        with get() = _body
        and set(value) = _body <- value
    
    override this.Type
        with get() = DeclarationType.Function
    
    override this.ToString() = 
        String.Format("{0} {1} {2} {3}", this.Specifier, this.Declarator, String.Join(" ", this.Declarations.Select(fun d -> d.ToString()).ToArray()), this.Body)
        
    override this.Descendants() =
        seq { 
            if this.Specifier <> null then
                yield this.Specifier :> AstNode
                for d in this.Specifier.Descendants() -> d
            if this.Declarator <> null then
                yield this.Declarator :> AstNode
                for d in this.Declarator.Descendants() -> d
            for dec in this.Declarations do
                yield dec :> AstNode
                for d in dec.Descendants() -> d
            if this.Body <> null then
                yield this.Body :> AstNode
                for d in this.Body.Descendants() -> d
        }
        
    override this.StructureEquals(node : AstNode) =
        match node with
        | :? AnyDeclaration -> true
        | :? FunctionDeclaration -> 
            let n = node :?> FunctionDeclaration
            AstNodeEqualityComparer.Structure.Equals(this.Specifier, n.Specifier) && 
            AstNodeEqualityComparer.Structure.Equals(this.Declarator, n.Declarator) &&
            AstNodeEqualityComparer.Structure.SequenceEqual(this.Declarations, n.Declarations) && 
            AstNode.StructureEquals(this.Body, n.Body)
        | _ -> false
    
type VariableDeclaration(specifier : SpecifierBase, declarators : IEnumerable<DeclaratorBase>) = 
    inherit DeclarationBase()
    let mutable _specifier = specifier
    let _declarators = if declarators <> null then declarators.ToList() else List<DeclaratorBase>()
        
    member this.Specifier
        with get() = _specifier
        and set(value) = _specifier <- value
    
    member this.Declarators
        with get() = _declarators
    
    override this.Type
        with get() = DeclarationType.Variable
        
    override this.ToString() = 
        String.Format("{0} {1};", this.Specifier, String.Join(",", this.Declarators.Select(fun d -> d.ToString()).ToArray()))
        
    override this.Descendants() =
        seq { 
            if this.Specifier <> null then
                yield this.Specifier :> AstNode
                for d in this.Specifier.Descendants() -> d
            for dec in this.Declarators do
                yield dec :> AstNode
                for d in dec.Descendants() -> d
        }
    
    override this.StructureEquals(node : AstNode) =
        match node with
        | :? AnyDeclaration -> true
        | :? VariableDeclaration -> 
            let n = node :?> VariableDeclaration
            AstNodeEqualityComparer.Structure.Equals(this.Specifier, n.Specifier) && 
            AstNodeEqualityComparer.Structure.SequenceEqual(this.Declarators, n.Declarators)
        | _ -> false