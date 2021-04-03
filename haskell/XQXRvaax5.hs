printStringNTimes 0 = return ()
printStringNTimes n action = do
    action
    printStringNTimes (n-1)
main = printStringNTimes 236 (putStrLn "XQXRvaax5")
