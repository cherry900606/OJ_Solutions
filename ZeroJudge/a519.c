#include <stdio.h>

int main()
{
    int n;
    while(1)
    {
        long long int ans[80]={0};
        scanf("%d",&n);
        if(n==0)
            break;
        for(int i=0;i<=n;i++)
        {
            if(i<=2)
                ans[i]=i;
            else
                ans[i]=ans[i-1]+ans[i-2];
        }
        printf("%lld\n",ans[n]);
    }

    return 0;
}
