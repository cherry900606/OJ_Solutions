#include<stdio.h>

int main()
{
	int n,m;
	while(scanf("%d %d",&n,&m)!=EOF)
	{
	    int sum=0,ans=0;
	    for(int i=n;;i++)
	    {
	        sum+=i;
	        ans++;
	        if(sum>m)
	        {
	            printf("%d\n",ans);
	            break;
	        }
	    }
	}
	return 0;
}
