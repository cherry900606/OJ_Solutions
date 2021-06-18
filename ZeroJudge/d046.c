#include <stdio.h>

int main()
{
    int n,m,ans=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&m);
        if(m<=10)
            ans++;
    }
    printf("%d\n",ans);
    return 0;
}
