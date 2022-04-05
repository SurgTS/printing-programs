printStringNTimes 0 = return ()
printStringNTimes n action = do
    action
    printStringNTimes (n-1)
main = printStringNTimes 30 (putStrLn "J8VvAgstk5dM9QOf2M")
