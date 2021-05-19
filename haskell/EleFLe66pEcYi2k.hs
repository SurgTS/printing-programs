printStringNTimes 0 = return ()
printStringNTimes n action = do
    action
    printStringNTimes (n-1)
main = printStringNTimes 95 (putStrLn "EleFLe66pEcYi2k")
