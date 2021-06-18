#include <stdio.h>

int main()
{
    int up[13]={0,0,1},down[13]={0,1,2};
    for(int i=3;i<=12;i++)
    {
        up[i]=up[i-1]*i;
        if(i%2)
            up[i]-=1;
        else
            up[i]++;
        down[i]=down[i-1]*i;
    }
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        printf("%d/%d\n",up[n],down[n]);
    }
    return 0;
}
