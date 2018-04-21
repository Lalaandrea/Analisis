#include <stdio.h>

int main()
{
	int n, counter=0;
	scanf("%d",&n);
	
		for(int i = 10; i <n*5; i *= 2){
		printf("Algoritmos\n");
		counter++;
	}
	printf("Counter= %d\n",counter );
	return 0;
}