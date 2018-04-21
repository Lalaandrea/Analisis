#include <stdio.h>

int main()
{
	int n, counter=0;
	scanf("%d",&n);
	
		for(int j = n; j > 1; j /= 2){
		if(j < n / 2){
			for(int i = 0; i < n; i += 2){
				//printf("\"Algoritmos\"\n");
				counter++;
			}
		}
}
	printf("Counter= %d\n",counter );
	return 0;
}