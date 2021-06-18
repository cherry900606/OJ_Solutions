#include <stdio.h>

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int temp;
        for(int i=0;i<n;i++)
            scanf("%d",&temp);
        for(int i=1;i<=n;i++)
            printf("%d ",i);
        printf("\n");
    }

    return 0;
}
