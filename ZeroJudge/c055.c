#include <stdio.h>
int data[10003];
void fact(int n)
{
    int sum=1;
    for(int i=1;i<=n;i++)
    {
        sum*=i;
        while(sum%10==0)
            sum/=10;
        sum%=100000;
        data[i]=sum%10;
    }
}
int main()
{
    fact(10000);
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        printf("%5d -> %d\n",n,data[n]);
    }
    return 0;
}
