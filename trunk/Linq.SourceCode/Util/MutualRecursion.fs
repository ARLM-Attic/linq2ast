module internal Linq.SourceCode.Util.MutualRecursion

let GetMethod(_type, _method) =
    lazy (
        let a = System.Reflection.Assembly.GetExecutingAssembly()
        let t = a.GetType(_type)
        let m = t.GetMethod(_method)
        m
        )

