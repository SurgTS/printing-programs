printStringNTimes 0 = return ()
printStringNTimes n action = do
    action
    printStringNTimes (n-1)
main = printStringNTimes 74 (putStrLn "S0kmjImWnzVW3N")
