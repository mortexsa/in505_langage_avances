;; version itteratif de la function interspace

(defun interspace_itter(obje o)
	(let ((x (list (car o))))
		(dolist(liste (cdr o))
			(setf x (append x (list obje) (list liste)))
		)
		x
	)
)

;; version recursif de la fonction interspace

(defun interspace_recu(obje o)
	(cond
		((null(cdr o)) o)
		(t (append (list (car o)) (list obje) (cdr o)))
	)
)