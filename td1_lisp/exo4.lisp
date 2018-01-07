;;exo4 : ecrire une fonction qui prend une liste comme 
;;argument et renvoie vrai si l'un de ses élèments est un liste.

(defun argliste(arg)
	(cond
		((null arg) NIL)
		((listp (car arg)) T)
		((mot (null arg)) (argliste (cdr arg)))
	)
	
)
