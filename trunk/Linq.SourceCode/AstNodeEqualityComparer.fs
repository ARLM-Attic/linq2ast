namespace System.Linq.SourceCode

open System
open System.Text
open System.IO
open System.Collections.Generic
open System.Linq;

[<AbstractClassAttribute>]
type AstNodeEqualityComparer() =
    interface IEqualityComparer<AstNode> with
        member this.GetHashCode(node : AstNode) =
            this.GetHashCode(node)
        member this.Equals(n1 : AstNode, n2 : AstNode) =
            this.Equals(n1, n2)
            
    abstract member GetHashCode : AstNode -> int
    abstract member Equals : AstNode * AstNode -> bool
    member this.SequenceEqual(first : IEnumerable<'T>, second : IEnumerable<'T>) =
        first.Select(fun d -> d:> AstNode).SequenceEqual(second.Select(fun d -> d:> AstNode), this)
  
    static member Structure = (new AstNodeStructureEqualityComparer()) :> AstNodeEqualityComparer      
    
and internal AstNodeStructureEqualityComparer() =
    inherit AstNodeEqualityComparer()
    
    override this.GetHashCode(node : AstNode) =
        node.GetHashCode()
    override this.Equals(n1 : AstNode, n2 : AstNode) =
        AstNode.StructureEquals(n1, n2)
