#include <stdio.h>
#include <math.h>

int main()
{
    int n,m;
    while(scanf("%d %d",&n,&m)!=EOF)
    {
        int ans=(int)(m*log10(n))+1;
        printf("%d\n",ans);
    }
    return 0;
}
