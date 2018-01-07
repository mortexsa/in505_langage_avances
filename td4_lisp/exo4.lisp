

(defun affiche(nom)
	(with-open-file (stream nom)
		(loop for line = (read-line stream nil 'foo)
			until(eq line 'foo)
			do (print line)
		)
	)
)