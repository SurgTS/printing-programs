(setq cnt 68)
(loop
    (setq cnt (- cnt 1))
    (write-line "Saceqs")
    (when (<= cnt 0)
        (return)
    )
)
