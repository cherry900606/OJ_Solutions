#include <stdio.h>

int main()
{
    int n,m;
    while(scanf("%d %d",&n,&m)!=EOF)
    {
        if(n>m)
            printf("%d\n",m+1);
        else
            printf("%d\n",m);
    }   
    return 0;
}
