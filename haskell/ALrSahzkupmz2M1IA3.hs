printStringNTimes 0 = return ()
printStringNTimes n action = do
    action
    printStringNTimes (n-1)
main = printStringNTimes 167 (putStrLn "ALrSahzkupmz2M1IA3")
