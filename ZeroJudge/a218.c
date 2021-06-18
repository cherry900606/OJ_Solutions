#include <stdio.h>

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int a[10]={0},temp,max=0;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&temp);
            a[temp]++;
        }
        for(int i=0;i<10;i++)
        {
            if(a[i]>max)
                max=a[i];
        }
        for(int i=max;i>0;i--)
        {
            for(int j=0;j<10;j++)
            {
                if(a[j]==i)
                    printf("%d ",j);
            }
        }
        printf("\n");
    }

    return 0;
}
