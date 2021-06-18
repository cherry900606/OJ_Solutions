#include <stdio.h>

int main()
{
    int n,p[100000]={0},temp=0,max=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&temp);
        while(temp>0)
        {
            p[i]=temp%10+p[i]*10;
            temp/=10;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(p[i]>max)
            max=p[i];
    }
    printf("%d\n",max);
    return 0;
}
