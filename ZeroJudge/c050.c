#include <stdio.h>
#include <math.h>
#define N 1000000
int main()
{
    int isprime[N]={1,1};
    int sqn=sqrt(N);
    int n;
    for(int i=2;i<=sqn;i++)
    {
        if(!isprime[i])
        {
            for(int j=i+i;j<N;j+=i)
                isprime[j]=1;
        }
    }
    while(scanf("%d",&n)&&n!=0)
    {
        for(int i=2;i<=n/2;i++)
        {
            if(!isprime[n-i]&&!isprime[i])
            {
                printf("%d = %d + %d\n",n,i,n-i);
                break;
            }
        }
    }
    return 0;
}
