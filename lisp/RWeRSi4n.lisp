(setq cnt 252)
(loop
    (setq cnt (- cnt 1))
    (write-line "RWeRSi4n")
    (when (<= cnt 0)
        (return)
    )
)
