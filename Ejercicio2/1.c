for(i = 1; i < n; i++){				//O(n)
	for(j = 0; j < n - 1; j++){		//O(n)
		temp = A[j];				//O(1)			
		A[j] = A[j + 1];			
		A[j + 1] = temp;			
	}
}