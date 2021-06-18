#include<math.h>
#include<stdio.h>
#define SIZE 46340
int prime[SIZE];
int primeTable[SIZE];
 
int main(){
	int n;
	int i, j, k = 0;
 
	for(i = 2; i < SIZE; i++)
	{
		if(!prime[i])
		{
			for(j = i*i; j < SIZE; j+=i)
				prime[j] = 1;
			primeTable[k++] = i;
		}
	}
 
	while(scanf("%d", &n) != EOF)
	{
		if(n < SIZE)
			!prime[n] ? puts("借计") : puts("獶借计");
		else
		{
			for(i = 0; i < k; i++)
			{
				if(!(n % primeTable[i]))
					break;
			}
			i == k ? puts("借计") : puts("獶借计");
		}
	}
}
