namespace System.Linq.SourceCode.C.Ansi

open System
open System.IO
open System.Collections.Generic
open System.Linq;

open System.Linq.SourceCode


type public SimpleInitializer(value : ExpressionBase) = 
    inherit InitializerBase()
    let mutable _value = value

    member this.Value
        with get() = _value
        and set(value) = _value <- value
    
    override this.Type
        with get() = InitializerType.SimpleInitializer
        
    override this.ToString() = 
        this.Value.ToString()
        
    override this.Descendants() =
        seq { 
            if this.Value <> null then
                yield this.Value:> AstNode
                for d in this.Value.Descendants() -> d
         }
    
    override this.StructureEquals(node : AstNode) =
        match node with
        | :? AnyInitializer -> true
        | :? SimpleInitializer -> 
            let n = node :?> SimpleInitializer
            AstNodeEqualityComparer.Structure.Equals(this.Value, n.Value)
        | _ -> false
        

type ArrayInitializer(initializers : IEnumerable<InitializerBase> , complete : bool) = 
    inherit InitializerBase()
    let _initializers = if initializers <> null then initializers.ToList() else List<InitializerBase>()
    let mutable _complete = complete    
        
    member this.Initializers
        with get() = _initializers
    
    member this.Complete
        with get() = _complete
        and set(value) = _complete <- value
    
    override this.Type
        with get() = InitializerType.ArrayInitializer
                    
    override this.ToString() = 
        String.Format("{{{0}{1}}}", String.Join(", ", this.Initializers.Select(fun p -> p.ToString()).ToArray()), if this.Complete then String.Empty else ", ")
        
    override this.Descendants() =
        seq { 
            for i in this.Initializers do
                yield i :> AstNode
                for d in i.Descendants() -> d
        }

    override this.StructureEquals(node : AstNode) =
        match node with
        | :? AnyInitializer -> true
        | :? ArrayInitializer -> 
            let n = node :?> ArrayInitializer
            (this.Complete = n.Complete) &&
            AstNodeEqualityComparer.Structure.SequenceEqual(this.Initializers, n.Initializers)
        | _ -> false