printStringNTimes 0 = return ()
printStringNTimes n action = do
    action
    printStringNTimes (n-1)
main = printStringNTimes 228 (putStrLn "Kxl3sjf4bzXV9cyD8yP")
