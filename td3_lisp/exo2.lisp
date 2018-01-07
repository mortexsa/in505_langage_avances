(defun precede (v  obj &optional (rang 1))
	(cond
		((=(length v )1)rang) nil)
	((equal(aref vect rang) obj) (cons (aref vect (- rang 1)) (precede obj v (+ rang 1))))
	(t (precede obj v (+ 1 rang)))

) 
		