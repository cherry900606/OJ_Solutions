#include <stdio.h>

int main()
{
    int n,age[101]={0},temp;
    while(scanf("%d",&n))
    {
        for(int i=0;i<101;i++)
            age[i]=0;
        if(n==0)
            break;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&temp);
            age[temp]++;
        }
        for(int i=0;i<101;i++)
        {
            while(age[i]>0)
            {
                printf("%d ",i);
                age[i]--;
            }
        }
        printf("\n");
    }
    
    return 0;
}
