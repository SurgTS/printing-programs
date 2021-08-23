printStringNTimes 0 = return ()
printStringNTimes n action = do
    action
    printStringNTimes (n-1)
main = printStringNTimes 132 (putStrLn "NWeuUnlmCdMiaO0K03W")
