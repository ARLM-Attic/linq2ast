using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Linq.SourceCode.C.Ansi;
using System.Linq.SourceCode;
using System.Text.RegularExpressions;

namespace StandardSearch
{
    class Program
    {
        static void Main(string[] args)
        {
            var code = ParseMethods.LoadTranslationUnit("sample.c");
            //var code = TranslationUnit.Parse(File.ReadAllText("sample.c"));
            
            // Find all functions called by their names
            var query = from d in code.Descendants().OfType<FunctionCallExpression>()
                        where d is IdentifierExpression
                        let identifier = d.Function as IdentifierExpression
                        where identifier.Value == "web_url"
                        select d;

            // Find all functions called by their names with at least 10 parameters
            //var query = from d in code.Descendants().OfType<FunctionCallExpression>()
            //            where d is IdentifierExpression && d.Parameters.Count > 10
            //            select d;

            // Find all functions called by their names which have only strings as parameters
            //var query = from d in code.Descendants().OfType<FunctionCallExpression>()
            //            where d is IdentifierExpression && d.Parameters.All(p => p is StringLiteralExpression)
            //            select d;

            // Find all strings which contains "Icons.16x16.Group.gif"
            //var query = from d in code.Descendants().OfType<StringLiteralExpression>()
            //            where d.Value.Contains("Icons.16x16.Group.gif")
            //            select d;

            // Find all strings matching regular expression @"Icons.\d\dx\d\d.Group.gif"
            //Regex regex = new Regex(@"Icons.\d\dx\d\d.Group.gif");
            //var query = from d in code.Descendants().OfType<StringLiteralExpression>()
            //            let match = regex.Match(d.Value)
            //            where match.Success
            //            select d;

            foreach (var d in query)
            {
                Console.WriteLine("{0} : {1}", d.GetType().ToString(), d.ToString());
            }
        }
    }
}
