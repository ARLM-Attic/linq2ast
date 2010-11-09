namespace System.Linq.SourceCode.C.Ansi

open System
open System.IO
open System.Collections.Generic
open System.Linq;
open Microsoft.FSharp.Text.Lexing

open System.Linq.SourceCode


type ExpressionList(expressions : IEnumerable<ExpressionBase>) =
    inherit ExpressionBase()
    let _list : List<ExpressionBase> = if expressions <> null then expressions.ToList() else List<ExpressionBase>()

    new() = ExpressionList(null)
        
    override this.Type
        with get() = ExpressionType.ExpressionList
        
    override this.ToString() =     
        String.Join(", ", _list.Select(fun v -> v.ToString()).ToArray());
        
    override this.Descendants() =
        seq { 
            for e in _list do
                yield e :> AstNode
                for d in e.Descendants() -> d
        }
    
    interface IList<ExpressionBase> with
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
        member this.GetEnumerator() = (_list :> System.Collections.Generic.IEnumerable<ExpressionBase>).GetEnumerator()
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
    member this.GetEnumerator() = (_list :> System.Collections.Generic.IEnumerable<ExpressionBase>).GetEnumerator()
    member this.IndexOf(item) = _list.IndexOf(item)
    member this.Insert(index, item) = _list.Insert(index, item)
    member this.Remove(item) = _list.Remove(item)
    member this.RemoveAt(index) = _list.RemoveAt(index)
    
    override this.StructureEquals(node : AstNode) =
        match node with
        | :? AnyExpression -> true
        | :? ExpressionList -> 
            let n = node :?> ExpressionList
            AstNodeEqualityComparer.Structure.SequenceEqual(this, n)
        | _ -> false
    
    
type public IdentifierExpression(value : string) = 
    inherit ExpressionBase()
    let mutable _value = value

    member this.Value
        with get() = _value
        and set(value) = _value <- value
    
    override this.Type
        with get() = ExpressionType.Identifier
        
    override this.ToString() = 
        this.Value
        
    override this.Descendants() =
        Enumerable.Empty()
        
    override this.StructureEquals(node : AstNode) =
        match node with
        | :? AnyExpression -> true
        | :? IdentifierExpression -> true
        | _ -> false


type public ConstantExpression(value : string) = 
    inherit ExpressionBase()
    let mutable _value = value

    member this.Value
        with get() = _value
        and set(value) = _value <- value
    
    override this.Type
        with get() = ExpressionType.Constant
        
    override this.ToString() = 
        this.Value
        
    override this.Descendants() =
        Enumerable.Empty()
      
    override this.StructureEquals(node : AstNode) =
        match node with
        | :? AnyExpression -> true
        | :? ConstantExpression -> true
        | _ -> false
  

type StringLiteralExpression(value : string, wide : bool) =
    inherit ExpressionBase()
    let mutable _value = value
    let mutable _wide = wide
    
    member this.Value
        with get() = _value
        and set(value) = _value <- value
        
    member this.Wide
        with get() = _wide
        and set(value) = _wide <- value
    
    override this.Type
        with get() = ExpressionType.StringLiteral
        
    override this.ToString() = 
        String.Format("{0}\"{1}\"", (if this.Wide then "L" else String.Empty), this.Value);

    override this.Descendants() =
        Enumerable.Empty()

    override this.StructureEquals(node : AstNode) =
        match node with
        | :? AnyExpression -> true
        | :? StringLiteralExpression -> 
             let n = node :?> StringLiteralExpression
             this.Wide = n.Wide
        | _ -> false

type ArrayExpression(array : ExpressionBase, index : ExpressionBase) = 
    inherit ExpressionBase()
    let mutable _array = array
    let mutable _index = index
    
    member this.Array
        with get() = _array
        and set(value) = _array <- value
    member this.Index
        with get() = _index
        and set(value) = _index <- value

    override this.Type
        with get() = ExpressionType.ArrayExpression
        
    override this.ToString() = 
        String.Format("({0}[{1}])", this.Array, this.Index);
        
    override this.Descendants() =
        seq { 
            if this.Array <> null then
                yield this.Array:> AstNode
                for d in this.Array.Descendants() -> d
            if this.Index <> null then
                yield this.Index:> AstNode
                for d in this.Index.Descendants() -> d
        }
    
    override this.StructureEquals(node : AstNode) =
        match node with
        | :? AnyExpression -> true
        | :? ArrayExpression -> 
            let n = node :?> ArrayExpression
            AstNodeEqualityComparer.Structure.Equals(this.Array, n.Array) && 
            AstNodeEqualityComparer.Structure.Equals(this.Index, n.Index)
        | _ -> false    
    

type FunctionCallExpression(``function`` : ExpressionBase , parameters : IEnumerable<ExpressionBase>) = 
    inherit ExpressionBase()
    let mutable _function = ``function``
    let _parameters = if parameters <> null then parameters.ToList() else List<ExpressionBase>()
    
    new(``function`` : string, parameters : IEnumerable<ExpressionBase>) = new FunctionCallExpression(new IdentifierExpression(``function``), parameters)
    
    member this.Function
        with get() = _function
        and set(value) = _function <- value
        
    member this.Parameters
        with get() = _parameters
        
    override this.Type
        with get() = ExpressionType.FunctionCallExpression
        
    override this.ToString() = 
        String.Format("({0}({1}))", this.Function, String.Join(",", this.Parameters.Select(fun p -> p.ToString()).ToArray()))

    override this.Descendants() =
        seq { 
            if this.Function <> null then
                yield this.Function :> AstNode
                for d in this.Function.Descendants() -> d
            for p in this.Parameters do
                yield p :> AstNode
                for d in p.Descendants() -> d
        }
    
    override this.StructureEquals(node : AstNode) =
        match node with
        | :? AnyExpression -> true
        | :? FunctionCallExpression -> 
            let n = node :?> FunctionCallExpression
            AstNodeEqualityComparer.Structure.Equals(this.Function, n.Function) && 
            AstNodeEqualityComparer.Structure.SequenceEqual(this.Parameters, n.Parameters)
        | _ -> false
 
 
type MemberDotExpression(structure : ExpressionBase, ``member`` : ExpressionBase ) = 
    inherit ExpressionBase()
    let mutable _structure = structure
    let mutable _member = ``member``
    
    member this.Structure
        with get() = _structure
        and set(value) = _structure <- value
    
    member this.Member
        with get() = _member
        and set(value) = _member <- value
    
    override this.Type
        with get() = ExpressionType.MemberDotExpression
        
    override this.ToString() = 
        String.Format("({0}.{1})", this.Structure, this.Member)
        
    override this.Descendants() =
        seq { 
            if this.Structure <> null then
                yield this.Structure :> AstNode
                for d in this.Structure.Descendants() -> d
            if this.Member <> null then
                yield this.Member :> AstNode
                for d in this.Member.Descendants() -> d
        }
    
    override this.StructureEquals(node : AstNode) =
        match node with
        | :? AnyExpression -> true
        | :? MemberDotExpression -> 
            let n = node :?> MemberDotExpression
            AstNodeEqualityComparer.Structure.Equals(this.Structure, n.Structure) && 
            AstNodeEqualityComparer.Structure.Equals(this.Member, n.Member) 
        | _ -> false


type MemberPtrExpression(pointer : ExpressionBase, ``member`` : ExpressionBase) = 
    inherit ExpressionBase()
    let mutable _pointer = pointer
    let mutable _member = ``member``
    
    member this.Pointer
        with get() = _pointer
        and set(value) = _pointer <- value
    
    member this.Member
        with get() = _member
        and set(value) = _member <- value
        
    override this.Type
        with get() = ExpressionType.MemberPtrExpression
        
    override this.ToString() = 
        String.Format("({0}->{1})", this.Pointer, this.Member)
      
    override this.Descendants() =
        seq { 
            if this.Pointer <> null then
                yield this.Pointer :> AstNode
                for d in this.Pointer.Descendants() -> d
            if this.Member <> null then
                yield this.Member :> AstNode
                for d in this.Member.Descendants() -> d
        }
    
    override this.StructureEquals(node : AstNode) =
        match node with
        | :? AnyExpression -> true
        | :? MemberPtrExpression -> 
            let n = node :?> MemberPtrExpression
            AstNodeEqualityComparer.Structure.Equals(this.Pointer, n.Pointer) && 
            AstNodeEqualityComparer.Structure.Equals(this.Member, n.Member)
        | _ -> false


type UnaryExpression(operand : ExpressionBase, operator : UnaryOperator) = 
    inherit ExpressionBase()
    let mutable _operand = operand    
    let mutable _operator = operator
    
    member this.Operand
        with get() = _operand
        and set(value) = _operand <- value
        
    member this.Operator
        with get() = _operator
        and set(value) = _operator <- value

    override this.Type
        with get() = ExpressionType.UnaryExpression
        
    override this.ToString() = 
        match (this.Operator) with
            | UnaryOperator.AddressOf -> String.Format("(&{0})", this.Operand);
            | UnaryOperator.Indirection -> String.Format("(*{0})", this.Operand);
            | UnaryOperator.Plus -> String.Format("(+{0})", this.Operand);
            | UnaryOperator.Minus -> String.Format("(-{0})", this.Operand);
            | UnaryOperator.Not -> String.Format("(!{0})", this.Operand);
            | UnaryOperator.LogicalNot -> String.Format("(~{0})", this.Operand);
            | UnaryOperator.PrefixIncrement -> String.Format("(++{0})", this.Operand);
            | UnaryOperator.PrefixDecrement -> String.Format("(--{0})", this.Operand);
            | UnaryOperator.PostfixIncrement -> String.Format("({0}++)", this.Operand);
            | UnaryOperator.PostfixDecrement -> String.Format("({0}--)", this.Operand);
            | UnaryOperator.Sizeof -> String.Format("(sizeof {0})", this.Operand);
            | _ -> null;    
    
    override this.Descendants() =
        seq { 
            if this.Operand <> null then
                yield this.Operand:> AstNode
                for d in this.Operand.Descendants() -> d
        }
        
    override this.StructureEquals(node : AstNode) =
        match node with
        | :? AnyExpression -> true
        | :? UnaryExpression -> 
            let n = node :?> UnaryExpression
            AstNodeEqualityComparer.Structure.Equals(this.Operand, n.Operand)
        | _ -> false

    
type public SizeofExpression(typeName : TypeNameBase ) = 
    inherit ExpressionBase()
    let mutable _typeName = typeName
    
    member this.TypeName 
        with get() = _typeName
        and set(value) = _typeName <- value
    
    override this.Type
        with get() = ExpressionType.SizeofExpression
        
    override this.ToString() =
        String.Format("sizeof({0})", this.TypeName);
        
    override this.Descendants() =
        seq { 
            if this.TypeName <> null then
                yield this.TypeName :> AstNode
                for d in this.TypeName.Descendants() -> d
        }
        
    override this.StructureEquals(node : AstNode) =
        match node with
        | :? AnyExpression -> true
        | :? SizeofExpression -> 
            let n = node :?> SizeofExpression
            AstNodeEqualityComparer.Structure.Equals(this.TypeName, n.TypeName)
        | _ -> false


type CastExpression(typeName : TypeNameBase , operand : ExpressionBase) = 
    inherit ExpressionBase()
    let mutable _typeName = typeName
    let mutable _operand = operand
    
    member this.TypeName 
        with get() = _typeName
        and set(value) = _typeName <- value
        
    member this.Operand 
        with get() = _operand
        and set(value) = _operand <- value
        
    override this.Type
        with get() = ExpressionType.CastExpression
        
    override this.ToString() =
        String.Format("(({0}){1})", this.TypeName, this.Operand);
    
    override this.Descendants() =
        seq { 
            if this.TypeName <> null then
                yield this.TypeName :> AstNode
                for d in this.TypeName.Descendants() -> d
            if this.Operand <> null then
                yield this.Operand :> AstNode
                for d in this.Operand.Descendants() -> d
        }
    
    override this.StructureEquals(node : AstNode) =
        match node with
        | :? AnyExpression -> true
        | :? CastExpression -> 
            let n = node :?> CastExpression
            AstNodeEqualityComparer.Structure.Equals(this.TypeName, n.TypeName) &&
            AstNodeEqualityComparer.Structure.Equals(this.Operand, n.Operand)
        | _ -> false
        
    
type BinaryExpression(operand1 : ExpressionBase, operator : BinaryOperator, operand2 : ExpressionBase) = 
    inherit ExpressionBase()
    let mutable _operator = operator
    let mutable _operand1 = operand1
    let mutable _operand2 = operand2
    
    
    member this.Operator 
        with get() = _operator
        and set(value) = _operator <- value
        
    member this.Operand1
        with get() = _operand1
        and set(value) = _operand1 <- value
        
    member this.Operand2
        with get() = _operand2
        and set(value) = _operand2 <- value
        
    override this.Type
        with get() = ExpressionType.BinaryExpression
        
    override this.ToString() =
        let operator = 
            match this.Operator with
            | BinaryOperator.Add -> "+"
            | BinaryOperator.Subtract -> "-"
            | BinaryOperator.Multiply -> "*"
            | BinaryOperator.Divide -> "/"
            | BinaryOperator.Modulo -> "%"
            | BinaryOperator.And -> "&"
            | BinaryOperator.Or -> "|"
            | BinaryOperator.Xor -> "^"
            | BinaryOperator.LogicalAnd -> "&&"
            | BinaryOperator.LogicalOr -> "||"
            | BinaryOperator.ShiftLeft -> "<<"
            | BinaryOperator.ShiftRight -> ">>"
            | BinaryOperator.LessThan -> "<"
            | BinaryOperator.GreaterThan -> ">"
            | BinaryOperator.LessOrEqual -> "<="
            | BinaryOperator.GreaterOrEqual -> ">="
            | BinaryOperator.Equal -> "=="
            | BinaryOperator.NotEqual -> "!="
            | BinaryOperator.Assign -> "="
            | BinaryOperator.AssignMultiply -> "*="
            | BinaryOperator.AssignDivide -> "/="
            | BinaryOperator.AssignModulo -> "%="
            | BinaryOperator.AssignAdd -> "+="
            | BinaryOperator.AssignSubtract -> "-="
            | BinaryOperator.AssignShiftLeft -> "<<="
            | BinaryOperator.AssignShiftRight -> ">>="
            | BinaryOperator.AssignAnd -> "&="
            | BinaryOperator.AssignXor -> "^="
            | BinaryOperator.AssignOr -> "|="
            | _ -> String.Empty
        String.Format("({0}{1}{2})", this.Operand1, operator, this.Operand2);

    override this.Descendants() =
        seq { 
            if this.Operand1 <> null then
                yield this.Operand1 :> AstNode
                for d in this.Operand1.Descendants() -> d
            if this.Operand2 <> null then
                yield this.Operand2 :> AstNode
                for d in this.Operand2.Descendants() -> d
        }
        
    override this.StructureEquals(node : AstNode) =
        match node with
        | :? AnyExpression -> true
        | :? BinaryExpression -> 
            let n = node :?> BinaryExpression
            AstNodeEqualityComparer.Structure.Equals(this.Operand1, n.Operand1) &&
            AstNodeEqualityComparer.Structure.Equals(this.Operand2, n.Operand2)
        | _ -> false
    

type TetrnaryExpression(condition : ExpressionBase , ifTrue : ExpressionBase , ifFalse : ExpressionBase ) = 
    inherit ExpressionBase()     
    let mutable _condition = condition
    let mutable _ifTrue = ifTrue
    let mutable _ifFalse = ifFalse
    
    member this.IfFalse
        with get() = _ifFalse
        and set(value) = _ifFalse <- value
    
    member this.IfTrue 
        with get() = _ifTrue
        and set(value) = _ifTrue <- value
        
    member this.Condition 
        with get() = _condition
        and set(value) = _condition <- value    
        
    override this.Type
        with get() = ExpressionType.TetrnaryExpression
        
    override this.ToString() =
        String.Format("({0}?{1}:{3})", this.Condition, this.IfTrue, this.IfFalse);
        
    override this.Descendants() =
        seq { 
            if this.Condition <> null then
                yield this.Condition:> AstNode
                for d in this.Condition.Descendants() -> d
            if this.IfTrue <> null then
                yield this.IfTrue :> AstNode
                for d in this.IfTrue.Descendants() -> d
            if this.IfFalse <> null then
                yield this.IfFalse :> AstNode
                for d in this.IfFalse.Descendants() -> d
        }
        
    override this.StructureEquals(node : AstNode) =
        match node with
        | :? AnyExpression -> true
        | :? TetrnaryExpression -> 
            let n = node :?> TetrnaryExpression
            AstNodeEqualityComparer.Structure.Equals(this.Condition, n.Condition) &&
            AstNodeEqualityComparer.Structure.Equals(this.IfTrue, n.IfTrue) && 
            AstNodeEqualityComparer.Structure.Equals(this.IfFalse, n.IfFalse)
        | _ -> false