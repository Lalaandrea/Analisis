func BurbujaOptimizada(A, n)
	cambios = "Si"
	i = 0							//O(1)
	Mientras i < n - 1 && cambios != "No" hacer //O(n)
		cambios = "No"				//O(1)
		Para j = 0 hasta (n - 2) - i hacer 	//O(n)
			Si A[j + 1] < A[j] hacer	//O(1)
				aux = A[j]
				A[j] = A[j + 1]
				A[j + 1] = aux
				cambios = "Si"
			Fin Si 				
		Fin Para
		i = i + 1
	Fin Mientras
Fin func