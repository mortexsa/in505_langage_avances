;; Exercice 1 : difference entre chaque nombre est un.

(defun diff(l)
	(cond
		((null (cdr l)) t)
		((or (not(numberp (car l))) (not(numberp (car (cdr l))))) nil)
		((or (not(consp (car l))) (not(consp (car (cdr l))))) nil)
		((= 1 (abs (-(car l) (car (cdr l))))) (diff (cdr l)))
		(t nil)
	)
)