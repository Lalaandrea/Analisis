polinomio = 0;									
for(i = 0; i <= n; i++){				//O(n)
	polinomio = polinomio * z + A[n - i];	//O(1)	
}