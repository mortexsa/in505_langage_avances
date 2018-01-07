(defun enigme(X)
	(and (not (null X))
		(or (null (car X))
			(enigme (cdr X)))))