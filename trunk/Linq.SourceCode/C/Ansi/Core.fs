namespace System.Linq.SourceCode.C.Ansi

open System
open System.Text
open System.IO
open System.Collections.Generic
open System.Linq;
open Microsoft.FSharp.Text.Lexing

open System.Linq.SourceCode
open Linq.SourceCode.Util.MutualRecursion

type TypeQualifier =
| Const = 0
| Volatile =1


type TypeSpecifier =
| Void = 0
| Char = 1
| Short = 2
| Int = 3
| Long = 4
| Float = 5
| Double = 6
| Signed = 7
| Unsigned = 8

    
type LabelType =
| Standard = 0
| Case = 1
| Default = 2


type StorageClass =
| Typedef = 0
| Extern = 1
| Static = 2
| Auto = 3
| Register = 4


type StructureType =
| Struct = 0
| Union = 1


type UnaryOperator =
| AddressOf = 0
| Indirection = 1
| Plus = 2
| Minus = 3
| Not = 4
| LogicalNot = 5
| PrefixIncrement = 6
| PrefixDecrement = 7
| PostfixIncrement = 8
| PostfixDecrement = 9
| Sizeof = 10


type BinaryOperator =
| Add = 0
| Subtract = 1
| Multiply = 2
| Divide = 3
| Modulo = 4
| And = 5
| Or = 6
| Xor = 7
| LogicalAnd = 8
| LogicalOr = 9
| ShiftLeft = 10
| ShiftRight = 11
| LessThan = 12
| GreaterThan = 13
| LessOrEqual = 14
| GreaterOrEqual = 15
| Equal = 16
| NotEqual = 17
| Assign = 18
| AssignMultiply = 19
| AssignDivide = 20
| AssignModulo = 21
| AssignAdd = 22
| AssignSubtract = 23
| AssignShiftLeft = 24
| AssignShiftRight = 25
| AssignAnd = 26
| AssignXor = 27
| AssignOr = 28



type DeclarationType =
| Variable = 0
| Function = 1    
| Any = 3
     
[<AbstractClassAttribute>]
[<AllowNullLiteralAttribute>]
type DeclarationBase() = 
    inherit AstNode()
    abstract Type : DeclarationType
    static member Any = new AnyDeclaration()
    static member private _DeclarationParse = GetMethod("System.Linq.SourceCode.C.Ansi.ParseMethods", "ParseDeclaration")
    static member Parse(text : String) = 
        try
            DeclarationBase._DeclarationParse.Value.Invoke(null, [| text |]) :?> DeclarationBase
        with
        | :? System.Reflection.TargetInvocationException as ex -> raise ex.InnerException
and AnyDeclaration() =
    inherit DeclarationBase()
    override this.Descendants() =
        Enumerable.Empty()
    override this.Type
        with get() = DeclarationType.Any
    override this.StructureEquals(node : AstNode) =
        match node with
        | :?  DeclarationBase -> true
        | _ -> false
    
         
    
type DeclaratorType =     
| Name = 0
| Array = 1
| Function = 2
| Pointer = 3
| IdentifierList = 4
| Init = 5
| PointerAbstract = 6
| ArrayAbstract = 7
| FunctionAbstract = 8
| Structure = 9
| Any = 10

[<AbstractClassAttribute>]
[<AllowNullLiteralAttribute>]
type DeclaratorBase() = 
    inherit AstNode()
    abstract Type : DeclaratorType
    static member Any = new AnyDeclarator()
and AnyDeclarator() =
    inherit DeclaratorBase()
    override this.Descendants() =
        Enumerable.Empty()
    override this.Type
        with get() = DeclaratorType.Any    
    override this.StructureEquals(node : AstNode) =
        match node with
        | :?  DeclaratorBase -> true
        | _ -> false

[<AbstractClassAttribute>]
[<AllowNullLiteralAttribute>]
type EnumeratorBase() = 
    inherit AstNode()
    static member Any = new AnyEnumerator()
and AnyEnumerator() =
    inherit EnumeratorBase()
    override this.Descendants() =
        Enumerable.Empty()
    override this.StructureEquals(node : AstNode) =
        match node with
        | :?  EnumeratorBase -> true
        | _ -> false
    
type ExpressionType = 
| ExpressionList = 0
| Identifier = 1
| Constant = 2
| StringLiteral = 3
| ArrayExpression = 4
| FunctionCallExpression = 5
| MemberDotExpression = 6
| MemberPtrExpression = 7
| UnaryExpression = 8
| SizeofExpression = 9
| CastExpression = 10
| BinaryExpression = 11
| TetrnaryExpression = 12
| Any = 13

[<AbstractClassAttribute>]
[<AllowNullLiteralAttribute>]
type ExpressionBase() = 
    inherit AstNode()
    abstract Type : ExpressionType
    static member private _ExpressionParse = GetMethod("System.Linq.SourceCode.C.Ansi.ParseMethods", "ParseExpression")
    static member Parse(text : String) = 
        try
            ExpressionBase._ExpressionParse.Value.Invoke(null, [| text |]) :?> ExpressionBase
        with
        | :? System.Reflection.TargetInvocationException as ex -> raise ex.InnerException
    static member Any = new AnyExpression()
and AnyExpression() =
    inherit ExpressionBase()
    override this.Descendants() =
        Enumerable.Empty()
    override this.Type
        with get() = ExpressionType.Any           
    override this.StructureEquals(node : AstNode) =
        match node with
        | :?  ExpressionBase -> true
        | _ -> false
    

type InitializerType = 
| SimpleInitializer = 0
| ArrayInitializer = 1
| Any = 2

[<AbstractClassAttribute>]
[<AllowNullLiteralAttribute>]
type InitializerBase() = 
    inherit AstNode()
    abstract Type : InitializerType
    static member Any = new AnyInitializer()
and AnyInitializer() =
    inherit InitializerBase()
    override this.Descendants() =
        Enumerable.Empty()
    override this.Type
        with get() = InitializerType.Any    
    override this.StructureEquals(node : AstNode) =
        match node with
        | :?  InitializerBase -> true
        | _ -> false
    
[<AbstractClassAttribute>]
[<AllowNullLiteralAttribute>]
type ParameterBase() = 
    inherit AstNode()
    static member Any = new AnyParameter()
and AnyParameter() =
    inherit ParameterBase()
    override this.Descendants() =
        Enumerable.Empty()
    override this.StructureEquals(node : AstNode) =
        match node with
        | :?  ParameterBase -> true
        | _ -> false
     
    
[<AbstractClassAttribute>]
[<AllowNullLiteralAttribute>]
type PointerBase() = 
    inherit AstNode()
    static member Any = new AnyPointer()
and AnyPointer() =
    inherit PointerBase()
    override this.Descendants() =
        Enumerable.Empty()    
    override this.StructureEquals(node : AstNode) =
        match node with
        | :?  PointerBase -> true
        | _ -> false
    
type SpecifierType =
| SpecifierList = 0
| StandardType = 1
| Enum = 2
| StorageClass = 3
| TypeQualification = 4
| Structure = 5
| Any = 6

[<AbstractClassAttribute>]
[<AllowNullLiteralAttribute>]
type SpecifierBase() = 
    inherit AstNode()
    abstract Type : SpecifierType
    static member Any = new AnySpecifier()
and AnySpecifier() =
    inherit SpecifierBase()
    override this.Descendants() =
        Enumerable.Empty()
    override this.Type
        with get() = SpecifierType.Any
    override this.StructureEquals(node : AstNode) =
        match node with
        | :?  SpecifierBase -> true
        | _ -> false
    
type StatementType =
| Labeled = 0
| CaseLabeled = 1
| DefaultLabeled = 2
| Compound = 3
| Expression = 4
| If = 5
| Switch = 6
| While = 7
| DoWhile = 8
| For = 9
| Goto = 10
| Continue = 11
| Break = 12
| Return = 13
| Any = 14

[<AbstractClassAttribute>]
[<AllowNullLiteralAttribute>]
type StatementBase() = 
    inherit AstNode()
    abstract Type : StatementType
    static member private _StatementParse = GetMethod("System.Linq.SourceCode.C.Ansi.ParseMethods", "ParseStatement")
    static member Parse(text : String) = 
        try
            StatementBase._StatementParse.Value.Invoke(null, [| text |]) :?> StatementBase
        with
        | :? System.Reflection.TargetInvocationException as ex -> raise ex.InnerException
    static member Any = new AnyStatement()
and AnyStatement() =
    inherit StatementBase()
    override this.Descendants() =
        Enumerable.Empty()
    override this.Type
        with get() = StatementType.Any
    override this.StructureEquals(node : AstNode) =
        match node with
        | :?  StatementBase -> true
        | _ -> false
    
    
[<AbstractClassAttribute>]
[<AllowNullLiteralAttribute>]
type TypeNameBase() = 
    inherit AstNode()
    static member Any = new AnyTypeName()
and AnyTypeName() =
    inherit TypeNameBase()
    override this.Descendants() =
        Enumerable.Empty()
    override this.StructureEquals(node : AstNode) =
        match node with
        | :?  TypeNameBase -> true
        | _ -> false