#include <stdio.h>

int main()
{
    int n,m[1000];
    while(scanf("%d",&n)!=EOF)
    {
        for(int i=0;i<n;i++)
            scanf("%d",&m[i]);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(m[i]<m[j])
                {
                    int temp=m[i];
                    m[i]=m[j];
                    m[j]=temp;
                }
            }
        }
        for(int i=0;i<n;i++)
            printf("%d ",m[i]);
        printf("\n");
    }
    return 0;
}
