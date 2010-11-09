#light 

namespace System.Linq.SourceCode.C.Ansi

open System
open System.IO
open System.Collections.Generic
open System.Linq;
open Microsoft.FSharp.Text.Lexing

open System.Linq.SourceCode


type ParseMethods = 
    static member internal Load(production :(LexBuffer<char> -> Parser.token) -> LexBuffer<char> -> 'a, textReader : TextReader) = 
        let lexbuf =  LexBuffer<char>.FromTextReader(textReader)
        try 
            production Lexer.token lexbuf
        with e -> 
            let pos = lexbuf.EndPos
            let message = System.String.Format("Syntax error near line {0}, column {1}", pos.Line, pos.Column)
            let ex = System.FormatException(message, e)
            ex.Data.["Position"] <- pos
            raise ex
    
    static member LoadExpression(textReader : TextReader) = 
        ParseMethods.Load(Parser.expression, textReader)
    
    static member LoadExpression(uri) = 
        ParseMethods.LoadExpression(File.OpenText(uri))
            
    static member ParseExpression(text) = 
        use reader = new StringReader(text)
        ParseMethods.LoadExpression(reader)
    
    
    static member LoadTranslationUnit(textReader : TextReader) = 
        ParseMethods.Load(Parser.translation_unit, textReader)
    
    static member LoadTranslationUnit(uri) = 
        ParseMethods.LoadTranslationUnit(File.OpenText(uri))
            
    static member ParseTranslationUnit(text) = 
        use reader = new StringReader(text)
        ParseMethods.LoadTranslationUnit(reader)
    
    
    static member LoadStatement(textReader : TextReader) = 
        ParseMethods.Load(Parser.Statement, textReader)
    
    static member LoadStatement(uri) = 
        ParseMethods.LoadStatement(File.OpenText(uri))
            
    static member ParseStatement(text) = 
        use reader = new StringReader(text)
        ParseMethods.LoadStatement(reader)
        
        
    static member LoadDeclaration(textReader : TextReader) = 
        ParseMethods.Load(Parser.declaration, textReader)
    
    static member LoadDeclaration(uri) = 
        ParseMethods.LoadDeclaration(File.OpenText(uri))
            
    static member ParseDeclaration(text) = 
        use reader = new StringReader(text)
        ParseMethods.LoadDeclaration(reader)
 

