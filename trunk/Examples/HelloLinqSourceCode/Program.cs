using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Linq.SourceCode.C.Ansi;
using System.IO;
using System.Linq.SourceCode;

namespace HelloLinqSourceCode
{
    class Program
    {
        static void Main(string[] args)
        {
            // Parse simple application
            var code = TranslationUnit.Parse("int main(){ printf(\"Hello LINQ to AST\"); return 0; }");

            // Display all nodes
            foreach (var d in code.Descendants())
            {
                Console.WriteLine("{0} : {1}", d.GetType().ToString(), d.ToString());
            }
        }
    }
}
