#include <stdio.h>
void f(long long int n)
{
    if(n/10000000)
        {
            f(n/10000000);
            printf(" kuti");
            n%=10000000;
            if(n>0)
                printf(" ");
        }
        if(n/100000)
        {
            printf("%lld lakh",n/100000);
            n%=100000;
            if(n>0)
                printf(" ");
        }
        if(n/1000)
        {
            printf("%lld hajar",n/1000);
            n%=1000;
            if(n>0)
                printf(" ");
        }
        if(n/100)
        {
            printf("%lld shata",n/100);
            n%=100;
            if(n>0)
                printf(" ");
        }
        if(n!=0)
            printf("%lld",n);
}
int main()
{
    int i=1;
    long long int n;
    while(scanf("%lld",&n)!=EOF)
    {
        printf("%4d. ",i);
        if(n==0)
            printf("%lld",n);
        else
            f(n);
        printf("\n");
        i++;
    }
    return 0;
}
