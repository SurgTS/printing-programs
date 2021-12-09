printStringNTimes 0 = return ()
printStringNTimes n action = do
    action
    printStringNTimes (n-1)
main = printStringNTimes 102 (putStrLn "KA6f2E6F3fyz2U")
