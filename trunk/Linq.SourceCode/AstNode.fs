namespace System.Linq.SourceCode

open System
open System.Text
open System.IO
open System.Collections.Generic
open System.Linq;


[<AbstractClassAttribute>]
[<AllowNullLiteralAttribute>]
type AstNode() = 
    let mutable _tag : System.Object = null
    
    member this.Tag
        with get() : System.Object = _tag
        and set(value : System.Object) = _tag <- value
        
    abstract member Descendants : unit -> IEnumerable<AstNode>
    
    abstract member StructureEquals : AstNode -> bool
    default this.StructureEquals(node) = false
    
    static member StructureEquals(n1 : AstNode, n2 : AstNode) = 
        ((n1 = n2) || (((n1 <> null) && (n2 <> null)) && n1.StructureEquals(n2)))

