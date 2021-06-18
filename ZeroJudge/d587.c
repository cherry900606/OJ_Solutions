#include <stdio.h>

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int a[3]={0},temp;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&temp);
            if(temp==1)
                a[0]+=1;
            else if(temp==2)
                a[1]+=1;
            else
                a[2]+=1;
        }
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<a[i];j++)
                printf("%d ",i+1);
        }
        printf("\n");
    }

    return 0;
}
