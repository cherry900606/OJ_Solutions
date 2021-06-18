#include <stdio.h>

int main()
{
    int n;
    while(1)
    {
        scanf("%d",&n);
        if(n==0)
            break;
        for(int i=0;i<n;i++)
        {
            for(int j=n-1-i;j>0;j--)
                printf("_");
            for(int j=0;j<i+1;j++)
                printf("+");
            printf("\n\n");
        }
    }
    return 0;
}
