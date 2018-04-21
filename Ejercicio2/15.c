func Seleccion(A, n)
	Para k = 0 hasta n - 2 hacer			//O(n)		
		p = k
		Para i = k + 1 hasta n - 1 hacer	//O(n)
			Si A[i] < A[p] entonces			
				p = i 		//O(1)
			Fin Si							
		Fin Para
		temp = A[p]			//O(1)
		A[p] = A[k]
		A[k] = temp						
	Fin Para
Fin func