#light 

namespace System.Linq.SourceCode.C.Ansi

open System
open System.IO
open System.Collections.Generic
open System.Linq;
open Microsoft.FSharp.Text.Lexing

open System.Linq.SourceCode
open Linq.SourceCode.Util.MutualRecursion


type TranslationUnit(declarations : IEnumerable<DeclarationBase>) = 
    inherit AstNode()
    let _list = if declarations <> null then declarations.ToList() else List<DeclarationBase>()
             
    new() = TranslationUnit(null)
    
    override this.ToString() = 
        let sb = new System.Text.StringBuilder()
        ignore(sb.Append(String.Join(" ", _list.Select(fun d -> d.ToString()).ToArray())))
        sb.ToString()     
        
    override this.Descendants() =
        seq { 
            for dec in _list do
                yield dec :> AstNode
                for d in dec.Descendants() -> d
        }

    static member private _parse = GetMethod("System.Linq.SourceCode.C.Ansi.ParseMethods", "ParseTranslationUnit")
    static member Parse(text : String) = 
        TranslationUnit._parse.Value.Invoke(null, [| text |]) :?> TranslationUnit
        
    interface IList<DeclarationBase> with
        member this.Count with get() = _list.Count
        member this.IsReadOnly with get() = false
        member this.Item 
            with get(index) = _list.Item(index)
            and set index value  = _list.Item(index) <- value
        member this.Add(item) = _list.Add(item)      
        member this.Clear() = _list.Clear()
        member this.Contains(item) = _list.Contains(item)
        member this.CopyTo(array, arrayIndex) = _list.CopyTo(array, arrayIndex)
        //[<OverloadID("System.Collections")>]
        member this.GetEnumerator() = (_list :> System.Collections.IEnumerable).GetEnumerator()
        //[<OverloadID("System.Collections.Generic")>]
        member this.GetEnumerator() = (_list :> System.Collections.Generic.IEnumerable<DeclarationBase>).GetEnumerator()
        member this.IndexOf(item) = _list.IndexOf(item)
        member this.Insert(index, item) = _list.Insert(index, item)
        member this.Remove(item) = _list.Remove(item)
        member this.RemoveAt(index) = _list.RemoveAt(index)
    member this.count with get() = _list.Count
    member this.Item
        with get(index) = _list.Item(index)
        and set index value = _list.Item(index) <- value
    member this.Add(item) = _list.Add(item)
    member this.Clear() = _list.Clear()
    member this.Contains(item) = _list.Contains(item)
    member this.CopyTo(array, arrayIndex) = _list.CopyTo(array, arrayIndex)
    member this.GetEnumerator() = (_list :> System.Collections.Generic.IEnumerable<DeclarationBase>).GetEnumerator()
    member this.IndexOf(item) = _list.IndexOf(item)
    member this.Insert(index, item) = _list.Insert(index, item)
    member this.Remove(item) = _list.Remove(item)
    member this.RemoveAt(index) = _list.RemoveAt(index)
    
    override this.StructureEquals(node : AstNode) =
        match node with
        | :? TranslationUnit -> 
            let n = node :?> TranslationUnit
            AstNodeEqualityComparer.Structure.SequenceEqual(this, n)
        | _ -> false