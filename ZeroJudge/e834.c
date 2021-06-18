#include <stdio.h>

int main()
{
    int m,n;
    scanf("%d",&m);
    while(scanf("%d",&n))
    {
        if(n==0)
            break;
        else if(n%m==0)
            printf("%d\n",n/m);
        else
            printf("%d\n",m-n%m);
    }
    return 0;
}
