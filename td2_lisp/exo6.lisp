(defun min_max(x)
	(let ((min (car x)) (max (car x)))
		(dolist (i (cdr x))
			(if (> i max) (setf max i))
			(if (< i min) (setf min i))
		)
	(list min max)
	)
)
;; itteratif
(defun rever(liste)
	(let (( l () ))
		(dolist (i liste)
			(setf l (cons i l))
		)
		l
	)
)

(defun rever2(l)
	(cond
		((null l) l)
		((consp l) (append (rever2(cdr l) (list (car l)))))
	)
)