#include <stdio.h>

int main()
{
    int t,s=1;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int p[n+1];
        for(int i=0;i<n;i++)
            scanf("%d",&p[i]);
        printf("Case %d: %d\n",s++,p[n/2]);
    }
    return 0;
}
