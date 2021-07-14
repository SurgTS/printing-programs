printStringNTimes 0 = return ()
printStringNTimes n action = do
    action
    printStringNTimes (n-1)
main = printStringNTimes 7 (putStrLn "CqOYiB0mcSEhqjP7LxX")
