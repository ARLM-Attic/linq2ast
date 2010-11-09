namespace System.Linq.SourceCode.C.Ansi

open System
open System.Text
open System.IO
open System.Collections.Generic
open System.Linq;
open Microsoft.FSharp.Text.Lexing

open System.Linq.SourceCode


type LabeledStatement(label : String, innerStatement : StatementBase ) = 
    inherit StatementBase()
    let mutable _label = label
    let mutable _innerStatement = innerStatement

    member this.Label
        with get() = _label
        and set(value) = _label <- value
    
    member this.InnerStatement
        with get() = _innerStatement
        and set(value) = _innerStatement <- value
    
    override this.Type
        with get() = StatementType.Labeled
    
    override this.ToString() = 
        String.Format("{0}: {1}", this.Label, this.InnerStatement)
        
    override this.Descendants() =
        seq { 
            if this.InnerStatement <> null then
                yield this.InnerStatement :> AstNode
                for d in this.InnerStatement.Descendants() -> d
        }
        
    override this.StructureEquals(node : AstNode) =
        match node with
        | :? AnyStatement -> true
        | :? LabeledStatement -> 
            let n = node :?> LabeledStatement
            AstNodeEqualityComparer.Structure.Equals(this.InnerStatement, n.InnerStatement)
        | _ -> false


type CaseLabeledStatement(caseExpression : ExpressionBase, innerStatement : StatementBase) = 
    inherit StatementBase()
    let mutable _caseExpression = caseExpression
    let mutable _innerStatement = innerStatement

    member this.CaseExpression
        with get() = _caseExpression
        and set(value) = _caseExpression <- value
    
    member this.InnerStatement
        with get() = _innerStatement
        and set(value) = _innerStatement <- value
    
    override this.Type
        with get() = StatementType.CaseLabeled
        
    override this.ToString() = 
        String.Format("case {0}: {1}", this.CaseExpression, this.InnerStatement)

    override this.Descendants() =
        seq { 
            if this.CaseExpression <> null then
                yield this.CaseExpression :> AstNode
                for d in this.CaseExpression.Descendants() -> d
            if this.InnerStatement <> null then
                yield this.InnerStatement:> AstNode
                for d in this.InnerStatement.Descendants() -> d
        }
    
    override this.StructureEquals(node : AstNode) =
        match node with
        | :? AnyStatement -> true
        | :? CaseLabeledStatement -> 
            let n = node :?> CaseLabeledStatement
            AstNodeEqualityComparer.Structure.Equals(this.CaseExpression, n.CaseExpression) && 
            AstNodeEqualityComparer.Structure.Equals(this.InnerStatement, n.InnerStatement)
        | _ -> false
    

type DefaultLabeledStatement(innerStatement : StatementBase) = 
    inherit StatementBase()
    let mutable _innerStatement = innerStatement

    member this.InnerStatement
        with get() = _innerStatement
        and set(value) = _innerStatement <- value
    
    override this.Type
        with get() = StatementType.DefaultLabeled
        
    override this.ToString() = 
        String.Format("default: {1}", this.InnerStatement)

    override this.Descendants() =
        seq { 
            if this.InnerStatement <> null then
                yield this.InnerStatement:> AstNode
                for d in this.InnerStatement.Descendants() -> d
        }
        
    override this.StructureEquals(node : AstNode) =
        match node with
        | :? AnyStatement -> true
        | :? DefaultLabeledStatement -> 
            let n = node :?> DefaultLabeledStatement
            AstNodeEqualityComparer.Structure.Equals(this.InnerStatement, n.InnerStatement)
        | _ -> false


type CompoundStatement(declarations : IEnumerable<DeclarationBase>, statements : IEnumerable<StatementBase>) = 
    inherit StatementBase()
    let _declarations = if declarations <> null then declarations.ToList() else List<DeclarationBase>()
    let _statements = if statements <> null then statements.ToList() else List<StatementBase>()
    
    member this.Declarations
        with get() = _declarations
        
    member this.Statements
        with get() = _statements
        
    override this.Type
        with get() = StatementType.Compound
        
    override this.ToString() = 
        String.Format("{{{0}{1}}}", String.Join(" ", this.Declarations.Select(fun d -> d.ToString()).ToArray()), String.Join(", ", this.Statements.Select(fun s -> s.ToString()).ToArray()))

    override this.Descendants() =
        seq { 
            for x in _declarations do
                yield x :> AstNode
                for d in x.Descendants() -> d
            for x in _statements do
                yield x :> AstNode
                for d in x.Descendants() -> d
        }
        
    override this.StructureEquals(node : AstNode) =
        match node with
        | :? AnyStatement -> true
        | :? CompoundStatement -> 
            let n = node :?> CompoundStatement
            AstNodeEqualityComparer.Structure.SequenceEqual(this.Declarations, n.Declarations) && 
            AstNodeEqualityComparer.Structure.SequenceEqual(this.Statements, n.Statements)
        | _ -> false


type ExpressionStatement(expression : ExpressionBase) = 
    inherit StatementBase()
    let mutable _expression = expression

    member this.Expression
        with get() = _expression
        and set(value) = _expression <- value
    
    override this.Type
        with get() = StatementType.Expression
        
    override this.ToString() = 
        String.Format("{0};", this.Expression)
     
    override this.Descendants() =
        seq { 
            if this.Expression <> null then
                yield this.Expression :> AstNode
                for d in this.Expression.Descendants() -> d
        }
        
    override this.StructureEquals(node : AstNode) =
        match node with
        | :? AnyStatement -> true
        | :? ExpressionStatement -> 
            let n = node :?> ExpressionStatement
            AstNodeEqualityComparer.Structure.Equals(this.Expression, n.Expression)
        | _ -> false


type IfStatement(condition : ExpressionBase, ``then`` : StatementBase, ``else`` : StatementBase) = 
    inherit StatementBase()
    let mutable _condition = condition 
    let mutable _then = ``then``
    let mutable _else = ``else``

    member this.Condition
        with get() = _condition
        and set(value) = _condition <- value

    member this.Then
        with get() = _then
        and set(value) = _then <- value

    member this.Else
        with get() = _else
        and set(value) = _else <- value

    override this.Type
        with get() = StatementType.If
        
    override this.ToString() = 
        String.Format("if({0}){1}{2}", this.Condition, this.Then, if this.Else <> null then String.Format(" else {0}", this.Else) else String.Empty)

    override this.Descendants() =
        seq { 
            if this.Condition <> null then
                yield this.Condition :> AstNode
                for d in this.Condition.Descendants() -> d
            if this.Then <> null then
                yield this.Then:> AstNode
                for d in this.Then.Descendants() -> d
            if this.Else <> null then
                yield this.Else :> AstNode
                for d in this.Else.Descendants() -> d
        }
        
    override this.StructureEquals(node : AstNode) =
        match node with
        | :? AnyStatement -> true
        | :? IfStatement -> 
            let n = node :?> IfStatement
            AstNodeEqualityComparer.Structure.Equals(this.Condition, n.Condition) && 
            AstNodeEqualityComparer.Structure.Equals(this.Then, n.Then) && 
            AstNodeEqualityComparer.Structure.Equals(this.Else, n.Else)
        | _ -> false


type SwitchStatement(expression : ExpressionBase, body : StatementBase) = 
    inherit StatementBase()
    let mutable _expression = expression
    let mutable _body = body

    member this.Expression
        with get() = _expression
        and set(value) = _expression <- value
        
    member this.Body
        with get() = _body
        and set(value) = _body <- value
    
    override this.Type
        with get() = StatementType.Switch
        
    override this.ToString() = 
        String.Format("switch({0}){1}", this.Expression, this.Body)
    
    override this.Descendants() =
        seq { 
            if this.Expression <> null then
                yield this.Expression :> AstNode
                for d in this.Expression.Descendants() -> d
            if this.Body <> null then
                yield this.Body :> AstNode
                for d in this.Body.Descendants() -> d
        }
        
    override this.StructureEquals(node : AstNode) =
        match node with
        | :? AnyStatement -> true
        | :? SwitchStatement -> 
            let n = node :?> SwitchStatement
            AstNodeEqualityComparer.Structure.Equals(this.Expression, n.Expression) && 
            AstNodeEqualityComparer.Structure.Equals(this.Body, n.Body)
        | _ -> false


type WhileStatement(condition : ExpressionBase, body : StatementBase) = 
    inherit StatementBase()
    let mutable _condition = condition
    let mutable _body = body

    member this.Condition
        with get() = _condition
        and set(value) = _condition <- value
        
    member this.Body
        with get() = _body
        and set(value) = _body <- value
    
    override this.Type
        with get() = StatementType.While
        
    override this.ToString() = 
        String.Format("while({0}){1}", this.Condition, this.Body)
        
    override this.Descendants() =
        seq { 
            if this.Condition <> null then
                yield this.Condition :> AstNode
                for d in this.Condition.Descendants() -> d
            if this.Body <> null then
                yield this.Body :> AstNode
                for d in this.Body.Descendants() -> d
        }
    
    override this.StructureEquals(node : AstNode) =
        match node with
        | :? AnyStatement -> true
        | :? WhileStatement -> 
            let n = node :?> WhileStatement
            AstNodeEqualityComparer.Structure.Equals(this.Condition, n.Condition) && 
            AstNodeEqualityComparer.Structure.Equals(this.Body, n.Body)
        | _ -> false


type DoStatement(condition : ExpressionBase, body : StatementBase) = 
    inherit StatementBase()
    let mutable _condition = condition
    let mutable _body = body

    member this.Condition
        with get() = _condition
        and set(value) = _condition <- value
        
    member this.Body
        with get() = _body
        and set(value) = _body <- value
    
    override this.Type
        with get() = StatementType.DoWhile
        
    override this.ToString() = 
        String.Format("do {0} while({1})", this.Body, this.Condition)

    override this.Descendants() =
        seq { 
            if this.Body <> null then
                yield this.Body :> AstNode
                for d in this.Body.Descendants() -> d
            if this.Condition <> null then
                yield this.Condition :> AstNode
                for d in this.Condition.Descendants() -> d
        }
        
    override this.StructureEquals(node : AstNode) =
        match node with
        | :? AnyStatement -> true
        | :? DoStatement -> 
            let n = node :?> DoStatement
            AstNodeEqualityComparer.Structure.Equals(this.Condition, n.Condition) && 
            AstNodeEqualityComparer.Structure.Equals(this.Body, n.Body)
        | _ -> false


type ForStatement(initialization : StatementBase, condition : StatementBase, progress : ExpressionBase, body : StatementBase) = 
    inherit StatementBase()
    let mutable _initialization = initialization
    let mutable _condition = condition
    let mutable _progress = progress
    let mutable _body = body

    member this.Initialization
        with get() = _initialization
        and set(value) = _initialization <- value
    
    member this.Condition
        with get() = _condition
        and set(value) = _condition <- value
    
    member this.Progress
        with get() = _progress
        and set(value) = _progress <- value
        
    member this.Body
        with get() = _body
        and set(value) = _body <- value
    
    override this.Type
        with get() = StatementType.For
        
    override this.ToString() = 
        String.Format("for({0} {1} {2}){3}", this.Initialization, this.Condition, this.Progress, this.Body)

    override this.Descendants() =
        seq { 
            if this.Initialization <> null then
                yield this.Initialization :> AstNode
                for d in this.Initialization.Descendants() -> d
            if this.Condition <> null then
                yield this.Condition :> AstNode
                for d in this.Condition.Descendants() -> d
            if this.Progress <> null then
                yield this.Progress :> AstNode
                for d in this.Progress.Descendants() -> d
            if this.Body <> null then
                yield this.Body :> AstNode
                for d in this.Body.Descendants() -> d
        }
        
    override this.StructureEquals(node : AstNode) =
        match node with
        | :? AnyStatement -> true
        | :? ForStatement -> 
            let n = node :?> ForStatement
            AstNodeEqualityComparer.Structure.Equals(this.Initialization, n.Initialization) && 
            AstNodeEqualityComparer.Structure.Equals(this.Condition, n.Condition) && 
            AstNodeEqualityComparer.Structure.Equals(this.Progress, n.Progress) && 
            AstNodeEqualityComparer.Structure.Equals(this.Body, n.Body)
        | _ -> false


type GotoStatement(label : String) = 
    inherit StatementBase()
    let mutable _label = label

    member this.Label
        with get() = _label
        and set(value) = _label <- value
    
    override this.Type
        with get() = StatementType.Goto
        
    override this.ToString() = 
        String.Format("goto {0};", this.Label)
        
    override this.Descendants() =
        Enumerable.Empty()
        
    override this.StructureEquals(node : AstNode) =
        match node with
        | :? AnyStatement -> true
        | :? GotoStatement -> true
        | _ -> false


type ContinueStatement() = 
    inherit StatementBase()

    override this.Type
        with get() = StatementType.Continue
        
    override this.ToString() = 
        "continue;"
        
    override this.Descendants() =
        Enumerable.Empty()
    
    override this.StructureEquals(node : AstNode) =
        match node with
        | :? AnyStatement -> true
        | :? ContinueStatement -> true
        | _ -> false


type BreakStatement() = 
    inherit StatementBase()

    override this.Type
        with get() = StatementType.Break
        
    override this.ToString() = 
        "break;"

    override this.Descendants() =
        Enumerable.Empty()
    
    override this.StructureEquals(node : AstNode) =
        match node with
        | :? AnyStatement -> true
        | :? BreakStatement -> true
        | _ -> false

type ReturnStatement(expression : ExpressionBase) = 
    inherit StatementBase()
    let mutable _expression = expression

    member this.Expression
        with get() = _expression
        and set(value) = _expression <- value
    
    override this.Type
        with get() = StatementType.Return
        
    override this.ToString() = 
        String.Format("return {0};", this.Expression)

    override this.Descendants() =
        seq { 
            if this.Expression <> null then
                yield this.Expression :> AstNode
                for d in this.Expression.Descendants() -> d
        }
        
    override this.StructureEquals(node : AstNode) =
        match node with
        | :? AnyStatement -> true
        | :? ReturnStatement -> 
            let n = node :?> ReturnStatement
            AstNodeEqualityComparer.Structure.Equals(this.Expression, n.Expression)
        | _ -> false