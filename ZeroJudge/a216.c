#include<stdio.h>

int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
	    unsigned long int f=1,g=1;
	    for(int i=2;i<=n;i++)
	    {
	        f=i+f;
	        g=f+g;
	    }
	    printf("%lld %lld\n",f,g);
	}
	return 0;
}
