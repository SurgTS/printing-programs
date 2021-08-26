printStringNTimes 0 = return ()
printStringNTimes n action = do
    action
    printStringNTimes (n-1)
main = printStringNTimes 141 (putStrLn "I1iOaWlgOGwUyI")
