#include <stdio.h>

int main()
{
    int n;
    while(scanf("%d",&n))
    {
        if(n==0)
            break;
        while(n>=10)
            n=n/10+n%10;
        printf("%d\n",n);
    }
    return 0;
}
