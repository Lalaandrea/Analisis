func BurbujaSimple(A, n)
	Para i = 0 hasta n - 2 hacer					//O(n)		
		Para j = 0 hasta (n - 2) - i hacer		//O(n)
			Si A[j + 1] < A[j] hacer	//O(1)	
				aux = A[j]
				A[j] = A[j + 1]
				A[j + 1] = aux
			Fin Si 							
		Fin Para
	Fin Para
Fin func
