(setq cnt 35)
(loop
    (setq cnt (- cnt 1))
    (write-line "FNAvx14")
    (when (<= cnt 0)
        (return)
    )
)
