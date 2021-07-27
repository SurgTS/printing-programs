(setq cnt 110)
(loop
    (setq cnt (- cnt 1))
    (write-line "SC3CdA")
    (when (<= cnt 0)
        (return)
    )
)
