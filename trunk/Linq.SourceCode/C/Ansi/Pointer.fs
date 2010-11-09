namespace System.Linq.SourceCode.C.Ansi

open System
open System.IO
open System.Collections.Generic
open System.Linq;

open System.Linq.SourceCode


type Pointer(specifiers : IEnumerable<SpecifierBase>, nextPointer : PointerBase) = 
    inherit PointerBase()     
    let _specifiers = if specifiers <> null then specifiers.ToList() else List<SpecifierBase>()
    let mutable _nextPointer = nextPointer
    
    member this.Specifiers
        with get() = _specifiers
    
    member this.NextPointer
        with get() = _nextPointer
        and set(value) = _nextPointer <- value
        
    override this.ToString() =
        String.Format("*{0} {1}", String.Join(" ", this.Specifiers.Select(fun s -> s.ToString()).ToArray()), this.NextPointer)

    override this.Descendants() =
        seq { 
            for s in this.Specifiers do
                yield s :> AstNode
                for d in s.Descendants() -> d
            if this.NextPointer <> null then
                yield this.NextPointer :> AstNode
                for d in this.NextPointer.Descendants() -> d
        }
        
    override this.StructureEquals(node : AstNode) =
        match node with
        | :? AnyPointer -> true
        | :? Pointer -> 
            let n = node :?> Pointer
            AstNodeEqualityComparer.Structure.Equals(this.NextPointer, n.NextPointer) && 
            AstNodeEqualityComparer.Structure.SequenceEqual(this.Specifiers, n.Specifiers)
        | _ -> false