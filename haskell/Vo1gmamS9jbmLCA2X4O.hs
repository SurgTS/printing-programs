printStringNTimes 0 = return ()
printStringNTimes n action = do
    action
    printStringNTimes (n-1)
main = printStringNTimes 216 (putStrLn "Vo1gmamS9jbmLCA2X4O")
