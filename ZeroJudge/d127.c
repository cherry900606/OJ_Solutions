#include <stdio.h>

int main()
{
    long long int l,a,b;
    while(scanf("%lld",&l)!=EOF)
    {
        a=l/4,b=l/2-l/4;
        printf("%lld\n",a*b);
    }
    return 0;
}
