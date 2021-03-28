printStringNTimes 0 = return ()
printStringNTimes n action = do
    action
    printStringNTimes (n-1)
main = printStringNTimes 127 (putStrLn "Dcil50PYnjUR8Md3f")
