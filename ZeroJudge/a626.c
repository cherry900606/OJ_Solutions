#include <stdio.h>

int main()
{
    int prime[1000]={0},primetable[200],pnum=0;
    for(int i=2;i<=1000;i++)
    {
        if(!prime[i])
        {
            primetable[pnum++]=i;
            for(int j=i*i;j<=1000;j+=i)
                prime[j]=1;
        }
    }
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int count=0;
        while(primetable[count]<=n&&count<pnum)
        {
            printf("%10d",primetable[count]);
            count++;
            if(count%5==0)
                printf("\n");
        }
        printf("\n");
    }
	return 0;
}
