(defun min_max(x)
	(let ((min (car x)) (max (car x)))
		(dolist (i (cdr x))
			(if (> i max) (setf max i))
			(if (< i min) (setf min i))
		)
	(list min max)
	)
)

(defun maxb(x)
	(let* ((max1 (cadr (min_max x))) ( max2 (cadr (min_max (remove max1 x)))))
		(* max1 max2)
	)
)
