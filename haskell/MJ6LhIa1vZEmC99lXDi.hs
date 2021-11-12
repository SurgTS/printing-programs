printStringNTimes 0 = return ()
printStringNTimes n action = do
    action
    printStringNTimes (n-1)
main = printStringNTimes 237 (putStrLn "MJ6LhIa1vZEmC99lXDi")
