printStringNTimes 0 = return ()
printStringNTimes n action = do
    action
    printStringNTimes (n-1)
main = printStringNTimes 202 (putStrLn "L7AuRqPNvuA4pPdph")
