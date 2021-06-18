#include <stdio.h>

int main()
{
    int n,m;
    while(scanf("%d %d",&n,&m)!=EOF)
    {
        int ans=n*(n+1)*m*(m+1)/4;
        printf("%d\n",ans);
    }
    return 0;
}
