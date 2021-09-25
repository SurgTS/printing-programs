printStringNTimes 0 = return ()
printStringNTimes n action = do
    action
    printStringNTimes (n-1)
main = printStringNTimes 165 (putStrLn "Ba3BVxIkasM6sJUiM")
