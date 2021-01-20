printStringNTimes 0 = return ()
printStringNTimes n action = do
    action
    printStringNTimes (n-1)
main = printStringNTimes 216 (putStrLn "G01pBwbzUxsB9ux")
