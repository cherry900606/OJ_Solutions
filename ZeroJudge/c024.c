#include <stdio.h>

int main()
{
    long long int n;
    while(scanf("%lld",&n))
    {
        if(n<0)
            break;
        printf("%lld\n",(n*n+n+2)/2);
    }
    return 0;
}
