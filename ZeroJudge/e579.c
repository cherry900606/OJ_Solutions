#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,h[100],p,ans=0;
        scanf("%d",&n);
        scanf("%d",&p);
        for(int i=0;i<p;i++)
            scanf("%d",&h[i]);
        for(int i=1;i<=n;i++)
        {
            for(int j=0;j<p;j++)
            {
                if((i%h[j]==0)&&(i%7!=0)&&(i%7!=6))
                {
                    ans++;
                    break;
                }
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}
