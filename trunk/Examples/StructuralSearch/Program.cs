using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Linq.SourceCode.C.Ansi;

namespace StructuralSearch
{
    class Program
    {
        static void Main(string[] args)
        {
            var code = ParseMethods.LoadTranslationUnit("sample.c");
            //var code = TranslationUnit.Parse(File.ReadAllText("action1.c"));

            // Find all function calls with string literal as the only parameter
            var query = from d in code.Descendants().OfType<FunctionCallExpression>()
                        where d.Function is IdentifierExpression &&
                            d.Parameters.Count == 1 &&
                            d.Parameters[0] is StringLiteralExpression
                        select d;

            // Equivalent of previous query but with structural comparison
            //var example = ExpressionBase.Parse("foo(\"text\")");
            //var query = from d in code.Descendants()
            //            where AstNodeEqualityComparer.Structure.Equals(d, example)
            //            select d;


            // Find all function calls with one parameter of any kind and constant as second
            //var example = new FunctionCallExpression("foo", new ExpressionBase[]{
            //    ExpressionBase.Any, new ConstantExpression("10")})
            //var query = from d in code.Descendants()
            //            where AstNodeEqualityComparer.Structure.Equals(d, example)
            //            select d;


            foreach (var d in query)
            {
                Console.WriteLine("{0} : {1}", d.GetType().ToString(), d.ToString());
            }
        }
    }
}
