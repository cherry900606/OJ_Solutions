#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int min=100,max=0,n,temp;
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            scanf("%d",&temp);
            if(temp>max)
                max=temp;
            if(temp<min)
                min=temp;
        }
        printf("%d\n",(max-min)*2);
    }
    return 0;
}
