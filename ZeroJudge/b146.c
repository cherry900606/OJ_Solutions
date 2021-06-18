#include <stdio.h>

int main()
{
    int a[7]={0},unhappy=0,day=0,temp=0,t;
    for(int i=0;i<7;i++)
    {
        for(int j=0;j<2;j++)
        {
            scanf("%d",&temp);
            a[i]+=temp;
        }
    }
    t=a[0];
    for(int i=0;i<7;i++)
    {
        if(a[i]>8)
            unhappy=1;
        if(a[i]>t)
        {
            day=i+1;
            t=a[i];
        }
    }
    if(unhappy==0)
        printf("0\n");
    else
        printf("%d\n",day);
    return 0;
}
