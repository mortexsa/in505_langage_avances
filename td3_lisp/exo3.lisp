;;ittératif
(defun pos+(l)
	(progn
		(setf i -1)
		(setf l2 '())
		(dolist (elem l)
			(setf i (+ i 1))
			(setf l2 (append l2 (list (+ elem i))))
		)
		l2
	)
)

;;récursif
(defun pos++(l &optional (i 0))
	(cond
		((null l) l)
		((consp l) (cons (+ i (car l))(pos++(cdr l)(+ i 1))))
	)
)

;;mapcar
(defun post_map(l)
	(cond
		((null l) l)
		((consp l) (cons (car l) (post_map (mapcar '1+ (cdr l)))))
	)
)

(defun foo(l)
	(mapcar (lambda(x)(apply '+ x)) l)
)


(defun faa(l)
	(apply '+ l)
)