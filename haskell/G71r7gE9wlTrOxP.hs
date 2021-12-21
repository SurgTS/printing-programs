printStringNTimes 0 = return ()
printStringNTimes n action = do
    action
    printStringNTimes (n-1)
main = printStringNTimes 190 (putStrLn "G71r7gE9wlTrOxP")
