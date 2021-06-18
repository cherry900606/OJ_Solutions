#include <stdio.h>
#include <math.h>
int prime[100],pnum;
void sieve()
{
    pnum=0;
    int mark[100]={0};
    for(int i=2;i<100;i++)
    {
        if(!mark[i])
        {
            prime[pnum++]=i;
            for(int j=i*i;j<100;j+=i)
                mark[j]=1;
        }
    }
}
void solve(int n)
{
    int table[100]={0};
    for(int i=2;i<=n;i++)
    {
        int temp=i;
        for(int j=0;j<pnum&&temp!=1;j++)
        {
            while(temp%prime[j]==0)
                table[j]++,temp/=prime[j];
        }
    }
    printf("%3d! =",n);
    int count=0;
    for(int i=0;i<pnum;i++)
    {
        if(table[i]==0)
            break;
        count++;
        if(count>15)
            count-=15,printf("\n      ");
        printf("%3d",table[i]);
    }
    printf("\n");
}
int main()
{
    sieve();
    int n;
    while(scanf("%d",&n)&&n)
    {
        solve(n);
    }
    return 0;
}
