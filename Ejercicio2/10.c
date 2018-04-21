func OrdenamientoIntercambio(a, n)
	for(i = 0; i < n - 1; i++)					//O(n)
		for(int j = i + 1; j < n; j++)		//O(n-i)
			if(a[j] < a[i]){				
				temp = a[i];			//O(1)
				a[i] = a[j];
				a[j] = temp;
			}								
fin