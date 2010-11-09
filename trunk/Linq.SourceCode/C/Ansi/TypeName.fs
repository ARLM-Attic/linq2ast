namespace System.Linq.SourceCode.C.Ansi

open System
open System.IO
open System.Collections.Generic
open System.Linq;
open Microsoft.FSharp.Text.Lexing

open System.Linq.SourceCode


type TypeName(specifier : SpecifierBase , declarator : DeclaratorBase ) = 
    inherit TypeNameBase()
    let mutable _specifier = specifier
    let mutable _declarator = declarator
    
    new(specifier : SpecifierBase) = TypeName(specifier, null)
    
    member this.Specifier
        with get() = _specifier
        and set(value) = _specifier <- value
    
    member this.Declarator
        with get() = _declarator
        and set(value) = _declarator <- value
        
    override this.ToString() = 
        String.Format("{0} {1}", this.Specifier, this.Declarator)
 
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
        | :? AnyTypeName -> true
        | :? TypeName -> 
            let n = node :?> TypeName
            AstNodeEqualityComparer.Structure.Equals(this.Specifier, n.Specifier) && 
            AstNodeEqualityComparer.Structure.Equals(this.Declarator, n.Declarator)
        | _ -> false
            