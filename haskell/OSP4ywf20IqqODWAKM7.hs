printStringNTimes 0 = return ()
printStringNTimes n action = do
    action
    printStringNTimes (n-1)
main = printStringNTimes 119 (putStrLn "OSP4ywf20IqqODWAKM7")
