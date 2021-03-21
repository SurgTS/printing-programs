(setq cnt 160)
(loop
    (setq cnt (- cnt 1))
    (write-line "YtMaref")
    (when (<= cnt 0)
        (return)
    )
)
