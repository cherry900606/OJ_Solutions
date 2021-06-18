#include <stdio.h>

int main()
{
    int n,a,f;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&a,&f);
        for(int j=0;j<f;j++)
        {
            for(int k=1;k<=a;k++)
            {
                for(int l=1;l<=k;l++)
                    printf("%d",k);
                printf("\n");
            }
            for(int k=a-1;k>=1;k--)
            {
                for(int l=1;l<=k;l++)
                    printf("%d",k);
                printf("\n");
            }
            printf("\n");
        }
        
    }
    return 0;
}
