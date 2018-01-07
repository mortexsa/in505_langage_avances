(defun min_max(x)
	(let ((min (car x)) (max (car x)))
		(dolist (i (cdr x))
			(if (> i max) (setf max i))
			(if (< i min) (setf min i))
		)
	(list min max)
	)
)


(defun min_maxb (l min max)
	(cond
		((null l) (list min max))
		((< (car l) min ) (min_maxb (cdr l) (car l) max))
	)
)