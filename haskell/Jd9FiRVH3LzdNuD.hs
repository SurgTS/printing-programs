printStringNTimes 0 = return ()
printStringNTimes n action = do
    action
    printStringNTimes (n-1)
main = printStringNTimes 46 (putStrLn "Jd9FiRVH3LzdNuD")
