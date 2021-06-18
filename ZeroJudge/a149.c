#include<stdio.h>

int main()
{
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
	    int temp,sum=1;
	    scanf("%d",&temp);
	    if(temp==0)
	        printf("0\n");
	    else
	    {
	        while(temp>0)
    	    {
	            sum*=temp%10;
	            temp/=10;
	        }
	        printf("%d\n",sum);
	    }
	}
	return 0;
}
