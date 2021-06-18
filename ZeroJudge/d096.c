#include <stdio.h>

int main()
{
    long long int n;
    while(scanf("%lld",&n)!=EOF)
    {
        long long int temp=((n+1)*(n+1))/4;
        printf("%lld\n",6*temp-9);
    }
    return 0;
}
