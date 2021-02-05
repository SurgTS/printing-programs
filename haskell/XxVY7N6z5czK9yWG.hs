printStringNTimes 0 = return ()
printStringNTimes n action = do
    action
    printStringNTimes (n-1)
main = printStringNTimes 114 (putStrLn "XxVY7N6z5czK9yWG")
