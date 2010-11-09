namespace System.Linq.SourceCode.C.Ansi

open System
open System.Text
open System.IO
open System.Collections.Generic
open System.Linq;
open Microsoft.FSharp.Text.Lexing

open System.Linq.SourceCode


type SpecifierList(specifiers : IEnumerable<SpecifierBase>) =
    inherit SpecifierBase()
    let _list : List<SpecifierBase> = if specifiers <> null then specifiers.ToList() else List<SpecifierBase>()
    
    new() = SpecifierList(null)
    
    override this.Type
        with get() = SpecifierType.SpecifierList
        
    override this.ToString() =     
        String.Join(" ", _list.Select(fun v -> v.ToString()).ToArray());
        
    interface IList<SpecifierBase> with
        member this.Count with get() = _list.Count
        member this.IsReadOnly with get() = false
        member this.Item 
            with get(index) = _list.Item(index)
            and set index value = _list.Item(index) <- value
        member this.Add(item) = _list.Add(item)      
        member this.Clear() = _list.Clear()
        member this.Contains(item) = _list.Contains(item)
        member this.CopyTo(array, arrayIndex) = _list.CopyTo(array, arrayIndex)
        //[<OverloadID("System.Collections")>]
        member this.GetEnumerator() = (_list :> System.Collections.IEnumerable).GetEnumerator()
        //[<OverloadID("System.Collections.Generic")>]
        member this.GetEnumerator() = (_list :> System.Collections.Generic.IEnumerable<SpecifierBase>).GetEnumerator()
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
    member this.GetEnumerator() = (_list :> System.Collections.Generic.IEnumerable<SpecifierBase>).GetEnumerator()
    member this.IndexOf(item) = _list.IndexOf(item)
    member this.Insert(index, item) = _list.Insert(index, item)
    member this.Remove(item) = _list.Remove(item)
    member this.RemoveAt(index) = _list.RemoveAt(index)
    
    override this.Descendants() =
        seq { 
            for s in _list do
                yield s :> AstNode
                for d in s.Descendants() -> d
        }
        
    override this.StructureEquals(node : AstNode) =
        match node with
        | :? AnySpecifier -> true
        | :? SpecifierList -> 
            let n = node :?> SpecifierList
            AstNodeEqualityComparer.Structure.SequenceEqual(this, n)
        | _ -> false


type StandardTypeSpecifier(typeSpecifier : TypeSpecifier) = 
    inherit SpecifierBase()
    let mutable _typeSpecifier = typeSpecifier

    member this.TypeSpecifier
        with get() = _typeSpecifier
        and set(value) = _typeSpecifier <- value
    
    override this.Type
        with get() = SpecifierType.StandardType
        
    override this.ToString() = 
        this.TypeSpecifier.ToString().ToLower()
        
    override this.Descendants() =
        Enumerable.Empty()
        
    override this.StructureEquals(node : AstNode) =
        match node with
        | :? AnySpecifier -> true
        | :? StandardTypeSpecifier -> true
        | _ -> false 


type EnumSpecifier(name : String, enumerators : IEnumerable<EnumeratorBase>) = 
    inherit SpecifierBase()
    let mutable _name = name
    let _enumerators = if enumerators <> null then enumerators.ToList() else List<EnumeratorBase>()
    
    member this.Name
        with get() = _name
        and set(value) = _name <- value
        
    member this.Enumerators
        with get() = _enumerators
        
    override this.Type
        with get() = SpecifierType.Enum
        
    override this.ToString() = 
        String.Format("enum {0} {{{1}}}", this.Name, String.Join(", ", this.Enumerators.Select(fun e -> e.ToString()).ToArray()))
        
    override this.Descendants() =
        seq { 
            for s in this.Enumerators do
                yield s :> AstNode
                for d in s.Descendants() -> d
        }
        
    override this.StructureEquals(node : AstNode) =
        match node with
        | :? AnySpecifier -> true
        | :? EnumSpecifier -> 
            let n = node :?> EnumSpecifier
            AstNodeEqualityComparer.Structure.SequenceEqual(this.Enumerators, n.Enumerators) && 
            (String.IsNullOrEmpty(this.Name) = String.IsNullOrEmpty(n.Name)) 
        | _ -> false 


type StorageClassSpecifier(storageClass : StorageClass) = 
    inherit SpecifierBase()
    let mutable _storageClass = storageClass

    member this.StorageClass
        with get() = _storageClass
        and set(value) = _storageClass <- value
    
    override this.Type
        with get() = SpecifierType.StorageClass
        
    override this.ToString() = 
        this.StorageClass.ToString().ToLower()

    override this.Descendants() =
        Enumerable.Empty()
        
    override this.StructureEquals(node : AstNode) =
        match node with
        | :? AnySpecifier -> true
        | :? StorageClassSpecifier -> 
            let n = node :?> StorageClassSpecifier
            (this.StorageClass = n.StorageClass)
        | _ -> false 

type TypeQualificationSpecifier(typeQualifier : TypeQualifier) = 
    inherit SpecifierBase()
    let mutable _typeQualifier = typeQualifier

    member this.TypeQualifier
        with get() = _typeQualifier
        and set(value) = _typeQualifier <- value
    
    override this.Type
        with get() = SpecifierType.TypeQualification
        
    override this.ToString() = 
        this.TypeQualifier.ToString().ToLower()
        
    override this.Descendants() =
        Enumerable.Empty()
        
    override this.StructureEquals(node : AstNode) =
        match node with
        | :? AnySpecifier -> true
        | :? TypeQualificationSpecifier -> 
             let n = node :?> TypeQualificationSpecifier
             (this.TypeQualifier = n.TypeQualifier)
        | _ -> false 


type StructureSpecifier(structureType : StructureType, name : String, declarations : IEnumerable<DeclarationBase>) = 
    inherit SpecifierBase()
    let mutable _structureType = structureType
    let mutable _name = name
    let _declarations = if declarations <> null then declarations.ToList() else List<DeclarationBase>()
    
    member this.StructureType
        with get() = _structureType
        and set(value) = _structureType <- value
    
    member this.Name
        with get() = _name
        and set(value) = _name <- value
        
    member this.Declarations
        with get() = _declarations

    override this.Type
        with get() = SpecifierType.Structure
                
    override this.ToString() = 
        String.Format("{0} {1} {{{2}}}", this.StructureType.ToString().ToLower(), this.Name, String.Join(" ", this.Declarations.Select(fun d -> d.ToString()).ToArray()))
        
    override this.Descendants() =
        seq { 
            for d in this.Declarations do
                yield d :> AstNode
                for d in d.Descendants() -> d
        }
    override this.StructureEquals(node : AstNode) =
        match node with
        | :? AnySpecifier -> true
        | :? StructureSpecifier -> 
            let n = node :?> StructureSpecifier
            (this.StructureType = n.StructureType) &&
            AstNodeEqualityComparer.Structure.SequenceEqual(this.Declarations, n.Declarations)
        | _ -> false
