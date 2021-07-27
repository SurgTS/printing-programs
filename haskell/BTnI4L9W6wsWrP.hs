printStringNTimes 0 = return ()
printStringNTimes n action = do
    action
    printStringNTimes (n-1)
main = printStringNTimes 134 (putStrLn "BTnI4L9W6wsWrP")
