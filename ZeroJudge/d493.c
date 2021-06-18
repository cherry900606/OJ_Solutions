#include <stdio.h>
#include <math.h>
int main()
{
    int a,n;
    long long int sum=0;
    while(scanf("%d %d",&a,&n)!=EOF)
    {
        sum=pow(a,n);
        printf("%lld\n",sum);
    }
    return 0;
}
