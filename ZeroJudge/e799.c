#include <stdio.h>

int main()
{
    int n,m;
    long long temp=0;
    char si[62][62]={'\0'};
    char c;
    scanf("%d %d %c",&n,&m,&c);
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&temp);
        for(int j=m-1;j>=0;j--)
        {
            if(temp==0)
                si[i][j]='.';
            else if(temp%2)
                si[i][j]=c;
            else
                si[i][j]='.';
            temp/=2;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%c",si[i][j]);
            if(j!=m-1)
                printf(" ");
            else
                printf("\n");
        }
    }
    return 0;
}
