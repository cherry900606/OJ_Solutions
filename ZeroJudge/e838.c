#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    char map[n][n];
    for(int i=0;i<n;i++)
    {
        scanf("%s",map[i]);
        getchar();
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(map[i][j]=='*')
                map[i][j]='o';
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(map[i][j]=='o')
            {
                for(int k=0;k<n;k++)
                {
                    if(map[i][k]!='o')
                        map[i][k]='*';
                    if(map[k][j]!='o')
                        map[k][j]='*';
                }
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(map[i][j]=='o')
                map[i][j]='*';
            printf("%c",map[i][j]);
        }
        printf("\n");
    }
    return 0;
}
