#include <stdio.h>

int main()
{
    int n;
    char c;
    scanf("%d",&n);
    getchar();
    int map[105][105]={0};
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            scanf("%c",&c);
            if(c=='*')
            {
                map[i][j]=-100;
                for(int x=i-1;x<=i+1;x++)
                {
                    for(int y=j-1;y<=j+1;y++)
                            map[x][y]++;
                }
            }
        }
        getchar();
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(map[i][j]<0)
                printf("*");
            else if(map[i][j]==0)
                printf("-");
            else
                printf("%d",map[i][j]);
        }
        printf("\n");
    }

    return 0;
}
