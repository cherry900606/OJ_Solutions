#include <stdio.h>
#include <math.h>
#define N 1000000
int main()
{
    int isprime[N]={1,1};
    int sqn=sqrt(N);
    int n,ans=0;
    for(int i=2;i<=sqn;i++)
    {
        if(!isprime[i])
        {
            for(int j=i*i;j<N;j+=i)
                isprime[j]=1;
        }
    }
    while(scanf("%d",&n)&&n!=0)
    {
        if(isprime[n])
            printf("%d is not prime.\n",n);
        else
        {
            int rev=0,copy=n;
            printf("%d ",n);
            while(n>0)
            {
                rev=n%10+rev*10;
                n/=10;
            }
            if(!isprime[rev]&&rev!=copy)
                printf("is emirp.\n");
            else
                printf("is prime.\n");
        }
    }
    return 0;
}
