printStringNTimes 0 = return ()
printStringNTimes n action = do
    action
    printStringNTimes (n-1)
main = printStringNTimes 226 (putStrLn "CJ8Z2oePvGG56zYR9")
