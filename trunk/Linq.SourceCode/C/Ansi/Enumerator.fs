namespace System.Linq.SourceCode.C.Ansi

open System
open System.IO
open System.Collections.Generic
open System.Linq;

open System.Linq.SourceCode


type public Enumerator(identifier : string, value : ExpressionBase) =
    inherit EnumeratorBase()
    let mutable _identifier = identifier
    let mutable _value = value

    member this.Identifier
        with get() = _identifier
        and set(value) = _identifier <- value
    
    member this.Value
        with get() = _value
        and set(value) = _value <- value
    
    override this.ToString() = 
        if this.Value = null then this.Identifier
        else String.Format("{0}={1}", this.Identifier, this.Value);

    override this.Descendants() =
        seq { 
            if this.Value <> null then
                yield this.Value :> AstNode
                for d in this.Value.Descendants() -> d
        }
    
    override this.StructureEquals(node : AstNode) =
        match node with
        | :? AnyEnumerator -> true
        | :? Enumerator -> 
            let n = node :?> Enumerator
            AstNodeEqualityComparer.Structure.Equals(this.Value, n.Value)
        | _ -> false   
