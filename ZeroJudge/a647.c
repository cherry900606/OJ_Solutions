#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int m,p;
        double ans;
        scanf("%d %d",&m,&p);
        ans=(double)(p-m)/m*100;
        if(ans>=0.0)
            printf("%6.2lf%% ",ans+1e-6);
        else if(ans-(1e-6)>-0.005)
            printf("0.00%% ");
        else
            printf("%6.2lf%% ",ans-(1e-6));
        if(ans>=10||ans<=-7)
            printf("dispose\n");
        else
            printf("keep\n");
    }
    return 0;
}
