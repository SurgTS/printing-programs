printStringNTimes 0 = return ()
printStringNTimes n action = do
    action
    printStringNTimes (n-1)
main = printStringNTimes 29 (putStrLn "GkcwBO4Nf3AfgEEbC")
