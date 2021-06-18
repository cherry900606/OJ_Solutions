#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m,p[11][11],check=0;
        scanf("%d %d",&n,&m);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
                scanf("%d",&p[i][j]);
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m/2;j++)
            {
                if(p[i][j]!=p[n-i-1][m-1-j])
                {
                    check=1;
                    break;
                }
            }
        }
        if(check)
            printf("keep defending\n");
        else
            printf("go forward\n");
    }
    return 0;
}
