#include <stdio.h>

int main()
{
    int n,m,fan[100001]={0};
    scanf("%d %d",&n,&m);
    while(m--)
    {
        int id,value;
        scanf("%d %d",&id,&value);
        fan[id]+=value;
    }
    int max=0;
    for(int i=0;i<n;i++)
    {
        if(fan[i]>max)
            max=fan[i];
    }
    for(int i=max;i>=0;i--)
    {
        for(int j=0;j<n;j++)
        {
            if(fan[j]==i)
                printf("%d %d\n",j,fan[j]);
        }
    }
    return 0;
}
