#include <stdio.h>

int main()
{
    int n=2,wa=0,wb=0,temp;
    while(n--)
    {
        int a=0,b=0;
        for(int i=0;i<4;i++)
        {
            scanf("%d",&temp);
            a+=temp;
        }
        for(int i=0;i<4;i++)
        {
            scanf("%d",&temp);
            b+=temp;
        }
        printf("%d:%d\n",a,b);
        if(a>b)
            wa+=1;
        else
            wb+=1;
    }
    if(wa>wb)
        printf("Win\n");
    else if(wa<wb)
        printf("Lose\n");
    else
        printf("Tie\n");
    return 0;
}
