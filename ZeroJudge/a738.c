#include <stdio.h>
int gcd(int a, int b)
{
	if (a == 0 || b == 0)
		return a + b;
	while ((a %= b) != 0 && (b %= a) != 0);
	return a + b;
}
int main()
{
   int n,m;
   while(scanf("%d %d",&n,&m)!=EOF)
   {
       printf("%d\n",gcd(n,m));
   }
    return 0;
}
