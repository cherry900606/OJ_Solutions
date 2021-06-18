#include <stdio.h>

int main()
{
    int n,t=1;
    scanf("%d",&n);
    while(n--)
    {
        int m,a[100],b[100],all[100],fast=0,total=0;
        scanf("%d",&m);
        for(int i=0;i<m;i++)
        {
            scanf("%d %d",&a[i],&b[i]);
            all[i]=a[i]*60+b[i];
            total+=a[i]*60+b[i];
        }
        fast=all[0];
        for(int i=0;i<m;i++)
        {
            if(fast>all[i])
                fast=all[i];
        }
        total/=m;
        printf("Track %d:\n",t++);
        printf("Best Lap: %d minute(s) %d second(s).\n",fast/60,fast-(fast/60)*60);
        printf("Average: %d minute(s) %d second(s).\n\n",total/60,total-(total/60)*60);
    }
    return 0;
}
