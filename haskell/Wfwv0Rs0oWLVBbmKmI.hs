printStringNTimes 0 = return ()
printStringNTimes n action = do
    action
    printStringNTimes (n-1)
main = printStringNTimes 99 (putStrLn "Wfwv0Rs0oWLVBbmKmI")
