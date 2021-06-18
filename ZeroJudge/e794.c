#include <stdio.h>

int main()
{
    int n,ans[50];
    scanf("%d",&n);
    for(int i=0;i<=n+1;i++)
    {
        if(i<2)
            ans[i]=i;
        else
            ans[i]=ans[i-1]+ans[i-2];
    }
    printf("%d:%d\n",ans[n],ans[n+1]);
    return 0;
}
