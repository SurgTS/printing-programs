printStringNTimes 0 = return ()
printStringNTimes n action = do
    action
    printStringNTimes (n-1)
main = printStringNTimes 125 (putStrLn "EaFSQC2r4Pf0udBWb6")
