#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m;
        scanf("%d %d",&n,&m);
        if(!n%m)
            printf("%d\n",n/m);
        else
        {
            int v=0;
            while(n>=m)
            {
                v+=n/m;
                n=n/m+n%m;
            }
            if(n!=1)
                printf("cannot do this\n");
            else
                printf("%d\n",v);
        }
    }
    return 0;
}
