;;exo 2
(defun foo(l)
	(car (cdr (cdr (cdr l))))
)
;;exo 3
(defun max(a b)
	(if(< a b) b a)
)
; autre methode
(defun max2(a b)
	(cond
		((or (not (numberp a)) (not (numberp b))) nil)
		((< a b) b)
		((> a b) a)
	)
)

;;exo 4
(defun estlist(liste)
	(if(null liste)
		nil
		(if (listp (car liste))
			t
			(estlist (cdr liste))
		)
	)
)

;;exo 5
;;A
(defun points(entier)
	(if(eql entier 0)
		nil
		(progn (format t ".") (points (- entier 1)))
	)
)

;;B
(defun counta(lst)
	(if (null lst)
		0
		(if (eql 'a (car lst))
			(+ 1 (counta (cdr lst))) 
			(counta (cdr lst))    
		)
	)
)

(defun enigme(X)
	(and (not (null X))
		(or (null (car X))
			(enigme (cdr X)))))


(defun mystere (X Y)
	(if (null Y)
		nil
		(if (eql (car Y) X)
			0
			(let ((Z (mystere X (cdr Y))))
				(and Z (+ Z 1))))))

(dolist (x '(a b c d)) (format t "~A" x) (if (eql c 'c) return 'done))

(let (cela 0) (when (oddp cela) (format t "c'est un nombre impair") (setf cela 1)))

;;correction 
(defun addlist(l1 l2)
	(cond
		((null l1) l2)
		((null l2) l1)
		((and (consp l1)(consp l2))
			(cons (+(car l1) (car l2)) (addlist (cdr l1) (cdr l2))))
		(t 'error)
	)
)

(defun replace_symb(symb1 symb2 l)

)