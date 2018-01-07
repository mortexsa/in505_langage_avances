;; une fonction qui calcule son nombre d'arguments

(defun nbr_arguments(&optional l &rest ll)
	(cond
		((null l) 0)
		((null ll) 1)
		((t (count ( cons l ll)))
	)
)

	