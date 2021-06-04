printStringNTimes 0 = return ()
printStringNTimes n action = do
    action
    printStringNTimes (n-1)
main = printStringNTimes 252 (putStrLn "NpIE6Z4D9EFa")
