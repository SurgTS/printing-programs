printStringNTimes 0 = return ()
printStringNTimes n action = do
    action
    printStringNTimes (n-1)
main = printStringNTimes 187 (putStrLn "JrXlv4MhjP5G9aOz4R")
