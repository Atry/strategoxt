module annotation-props-TestSuite
imports sunit annotation-props

signature
  sorts Exp Type
  constructors
    Var   : String -> Exp
    Plus  : Exp * Exp -> Exp
    Int   : Type
    Float : Type

    Failure: Result
    Success: Result
    
strategies

  test-success(s) =
    s < !Success + !Failure 

    main = 
        test-suite(!"annotation-properties-test",
            test1
        ;   test2
        ;   test3
        ;   test4
        ;   test5
        ;   test6
        ;   test7
        ;   test8
        ;   test9
        ;   test10
        ;   test11
        ;   test12
        ;   test13
        ;   test14
        ;   test15
        ;   test16
        ;   test17
        ;   test18
        ;   test19
        ;   test20
        ;   test21
        ;   test22
        )

    test1 =
        apply-test(
            !"1:  get a property from a single-item list"
        ,   get-prop(!"type")
        ,   !Var("a"){("type", Int)}
        ,   !Int
        )

    test2 =
        apply-test(
            !"2:  getting a property from a term without properties should fail"
        ,   test-success( get-prop(!"type") )
        ,   !Var("a")
        ,   !Failure
        )

    test3 =
        apply-test(
            !"3:  getting a non-existing property should fail"
        ,   test-success( get-prop(!"scope") )
        ,   !Var("a"){[("type", Int)]}
        ,   !Failure
        )

    test4 =
        apply-test(
            !"4:  get a property from a list"
        ,   get-prop(!"scope")
        ,   !Var("a"){("type", Int), ("scope", "f")}
        ,   !"f"
        )

    test5 =
        apply-test(
            !"5:  get a property from a list"
        ,   get-prop(!"type")
        ,   !Var("a"){("type", Int), ("scope", "f")}
        ,   !Int
        )

    test6 =
        apply-test(
            !"6:  replace a property in a list"
        ,   replace-prop(!"type", !Float)
        ,   !Var("a"){("type", Int), ("scope", "f")}
        ,   !Var("a"){("type", Float), ("scope", "f")}
        )

    test7 =
        apply-test(
            !"7:  replace a non-existing property in a list shouldn't change anything"
        ,   replace-prop(!"static-link", !"g")
        ,   !Var("a"){("type", Int), ("scope", "f")}
        ,   !Var("a"){("type", Int), ("scope", "f")}
        )

    test8 =
        apply-test(
            !"8:  add a property to a term without properties"
        ,   add-prop(!"type", !Int)
        ,   !Var("a")
        ,   !Var("a"){("type", Int)} 
        )

    test9 =
        apply-test(
            !"9:  add a property to a term with existing properties"
        ,   add-prop(!"type", !Int)
        ,   !Var("a"){("scope", "f")}
        ,   !Var("a"){("type", Int), ("scope", "f")}
        )

    test10 =
        apply-test(
            !"10: has-prop on a term without properties should fail"
        ,   test-success( has-prop(!"type"))
        ,   !Var("a")
        ,   !Failure
        )

    test11 =
        apply-test(
            !"11: has-prop on a term with the specified property should succeed"
        ,   test-success( has-prop(!"type"))
        ,   !Var("a"){("type", Int), ("scope", "f")}
        ,   !Success
        )

    test12 =
        apply-test(
            !"12: has-prop with condition on term not satisfying this condition"
        ,   test-success( has-prop(!"type", ?Float))
        ,   !Var("a"){("type", Int), ("scope", "f")}
        ,   !Failure
        )

    test13 =
        apply-test(
            !"13: has-prop with condition on term satisfying this condition"
        ,   test-success( has-prop(!"type", ?Int))
        ,   !Var("a"){("type", Int), ("scope", "f")}
        ,   !Success
        )

    test14 =
        apply-test(
            !"14: preserve the properties on the application of a strategy"
        ,   preserve-props( replace-prop(!"type", !Float) )
        ,   !Var("a"){("type", Int), ("scope", "f")}
        ,   !Var("a"){("type", Int), ("scope", "f")} 
        )

    test15 =
        apply-test(
            !"15: union on properties"
        ,   props-union
        ,   !([("scope", "f")], [("type", Float), ("scope", "f")])
        ,   ![("scope", "f"), ("type", Float)]
        )

    test16 =
        apply-test(
            !"16: merge the properties on the application of a strategy"
        ,   merge-props( add-prop(!"type", !Float) )
        ,   !Var("a"){("scope", "f")}
        ,   !Var("a"){("type", Float), ("scope", "f")}
        )
 
    test17 =
        apply-test(
            !"17: merge the properties on the application of a rule"
        ,   merge-props( Set-Some-Property(!"type", !Float)) 
        ,   !Var("a"){("scope", "f")}
        ,   !Var("a"){("type", Float), ("scope", "f")}
        )

    test18 =
        apply-test(
            !"18: merge the properties on the application of a rule"
        ,   merge-props( Set-Some-Property(!"type", !Float))
        ,   !Var("a")
        ,   !Var("a"){("type", Float)}
        )

    test19 =
        apply-test(
            !"19: merge the properties on the application of a rule"
        ,   merge-props( rm-annotations )
        ,   !Var("a"){("type", Float)}
        ,   !Var("a"){("type", Float)}
        )

    test20 =
        apply-test(
            !"20: set a currently non-existing property"
        ,   set-prop(!"type", !Float)
        ,   !Var("a")
        ,   !Var("a"){("type", Float)}
        )

    test21 =
        apply-test(
            !"21: set a currently non-existing property"
        ,   set-prop(!"type", !Float)
        ,   !Var("a"){("scope", "f")}
        ,   !Var("a"){("type", Float), ("scope", "f")}
        )

    test22 =
        apply-test(
            !"22: set a currently existing property"
        ,   set-prop(!"type", !Float)
        ,   !Var("a"){("type", Int)}
        ,   !Var("a"){("type", Float)}
        )

rules
    Set-Some-Property(s, v):
        t -> r
            where <add-prop(!"type", !Float)> t => r




