#include <stdio.h>

int main()
{
    int n,m,ans=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&m);
        if(m>ans)
            ans=m;
    }
    printf("%d",ans);
    return 0;
}
