
;; exo 5(a) : une version itérative puis récursive d'une fonction qui :
;; prend un entier positif et imprime autant de points.


;;version recursive :
(defun affiche(x)
	(if(= 0 x) nil (progn(format ".")(affiche(- x 1))))
)

;;version ittératif :
(defun point(n)
	(if (or (not (numberp n)) (<= n 0))
		
		(format t "erreur, n < 0")
		
		(do ((i 1(+ i 1)))
			((> i n))
			(format t ".")
		)
	)
)

;;version ittératif evolué :
(defun point(entier)
	(dotimes(n entier)
		(format t ".")
	)
)

;; (b) : prend une liste et renvoie le nombre de fois le symbole 'a'
;; apparaît dans cette liste. 

;; Version recursive :
(defun look_symb(symb l)
	(if (null l) 0
		(if (eq symb (car l))
			(+1 (look_symb symb (cdr l)))
		)
	)
)

;; Version ittératif :
(defun look_symb1(symb l)
	(cond 
		((null l) 0)
		((eq symb (car l))(+ 1 (look_symb symb (cdr l)))
			(t (look_symb symb (cdr l)))
		)
	)
	(look_symb 'a '((a) ((a)) b))
)

;; tfou
(defun look_symbs (symb l)
	cond
	((null l) 0)
	((atom l) (if (eq symb l) 1 0))
	((consp l) (+ (look_symbs symb (car l))
				  (look_symbs symb (cdr l)))
	(t "error"))
)

