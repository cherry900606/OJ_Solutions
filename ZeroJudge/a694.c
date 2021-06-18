#include <stdio.h>

int main()
{
    int n,m;
    while(scanf("%d %d",&n,&m)!=EOF)
    {
        int food[n][n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                scanf("%d",&food[i][j]);
        }
        int x1,y1,x2,y2;
        while(m--)
        {
            scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
            int ans=0;
            for(int i=y1-1;i<=y2-1;i++)
            {
                for(int j=x1-1;j<=x2-1;j++)
                    ans+=food[j][i];
            }
            printf("%d\n",ans);
        }
    }
    return 0;
}
