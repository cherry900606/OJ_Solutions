#include <stdio.h>

int main()
{
    long long a,b;
    while(scanf("%lld %lld",&a,&b))
    {
        if(a==0&&b==0)
            break;
        if(a==0||b==0)
            printf("%lld\n",a+b);
        else
        {
             while((a%=b)!=0&&(b%=a)!=0);
            printf("%lld\n",a+b);
        }
    }
    return 0;
}
