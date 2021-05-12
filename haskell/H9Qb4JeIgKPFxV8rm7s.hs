printStringNTimes 0 = return ()
printStringNTimes n action = do
    action
    printStringNTimes (n-1)
main = printStringNTimes 6 (putStrLn "H9Qb4JeIgKPFxV8rm7s")
