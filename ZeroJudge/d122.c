#include <stdio.h>

int main()
{
    long int n;
    while(scanf("%ld",&n)!=EOF)
    {
        int ans=0;
        n-=n%5;
        while(n>=5)
        {
            ans+=n/5;
            n/=5;
        }
        printf("%d\n",ans);
    }
    return 0;
}
