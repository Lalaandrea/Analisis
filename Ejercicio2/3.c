for i = 1 to n do 						// O(n^3)
	for j = 1 to n do 					//O(n^2)
		C[i,j] = 0;						//O(1)		
		for k = 1 to n do 			//O(n)
C[i,j] = C[i,j] + A[i,k]*B[k,j]; //O(1)