printStringNTimes 0 = return ()
printStringNTimes n action = do
    action
    printStringNTimes (n-1)
main = printStringNTimes 176 (putStrLn "Lq1oemK0X0XTZg6yl5d")
