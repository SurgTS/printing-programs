printStringNTimes 0 = return ()
printStringNTimes n action = do
    action
    printStringNTimes (n-1)
main = printStringNTimes 97 (putStrLn "VgMPtN8Wb32Ne9")
