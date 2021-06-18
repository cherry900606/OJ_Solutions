#include <stdio.h>

int main()
{
    int n,r;
    while(scanf("%d %d",&n,&r)!=EOF)
    {
        int id[10001]={0},temp;
        for(int i=0;i<r;i++)
        {
            scanf("%d",&temp);
            id[temp]=-1;
        }
            
        if(n==r)
            printf("*\n");
        else
        {
            for(int i=1;i<=n;i++)
            {
                if(id[i]==0)
                    printf("%d ",i);
            }
            printf("\n");
        }
    }
    return 0;
}
