printStringNTimes 0 = return ()
printStringNTimes n action = do
    action
    printStringNTimes (n-1)
main = printStringNTimes 42 (putStrLn "SlleK8ilHUW03Q3ihD")
