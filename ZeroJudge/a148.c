#include <stdio.h>

int main()
{
    int n,temp=0,sum=0;
    while(scanf("%d",&n)!=EOF)
    {
        sum=0;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&temp);
            sum+=temp;
        }
        if(sum>59*n)
            printf("no\n");
        else
            printf("yes\n");
    }
    return 0;
}
