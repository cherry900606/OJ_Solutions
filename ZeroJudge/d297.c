#include <stdio.h>

int main()
{
    long long int n;
    while(~scanf("%lld",&n))
    {
        if(n%2)
            printf("%lld\n",(2*n*n+3*n-1)*(n+1)/8);
        else
            printf("%lld\n",n*(n+2)*(2*n+1)/8);
    }
    return 0;
}
