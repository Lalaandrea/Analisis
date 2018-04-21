anterior = 1;		//O(1)			
actual = 1;						
while (n > 2){				//O(n)
	aux = anterior + actual;//O(1)
	anterior = actual;			
	actual = aux;				
	n = n - 1;
}