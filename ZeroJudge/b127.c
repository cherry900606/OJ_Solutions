#include <stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int ans[45]={0};
        for(int i=0;i<=n;i++)
        {
            if(i<2)
                ans[i]=1;
            else
                ans[i]=ans[i-1]+ans[i-2];
        }
        printf("%d\n",ans[n]);
    }
    return 0;
}
