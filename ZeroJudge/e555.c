#include <stdio.h>
#include <math.h>
int main()
{
    long long int s,d;
    while(scanf("%lld %lld",&s,&d)!=EOF)
    {
        printf("%lld\n", (int)ceil((-1 + sqrt(1 - 4 * (s-2*d-s*s))) / 2));
    }
    return 0;
}
