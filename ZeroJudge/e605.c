#include <stdio.h>

int main()
{
    int n,m,t=1;
    while(scanf("%d %d",&n,&m)&&n&&m)
    {
        getchar();
        int map[105][105]={0};
        char temp;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                temp=getchar();
                if(temp=='*')
                {
                    map[i][j]=-87;
                    for(int k=-1;k<=1;k++)
                    {
                        for(int l=-1;l<=1;l++)
                            map[i+k][j+l]++;
                    }
                }
            }
            getchar();
        }
        printf("Field #%d:\n",t++);
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(map[i][j]<0) printf("*");
                else printf("%d",map[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
