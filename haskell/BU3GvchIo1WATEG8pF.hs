printStringNTimes 0 = return ()
printStringNTimes n action = do
    action
    printStringNTimes (n-1)
main = printStringNTimes 179 (putStrLn "BU3GvchIo1WATEG8pF")
