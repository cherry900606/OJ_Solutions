#include <stdio.h>

int main()
{
    int n,x=0,p,ans=0;
    char cmd[15];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%s",cmd);
        if(cmd[0]=='L') x--;
        else if(cmd[0]=='R') x++;
        else
        {
            scanf("%d",&p);
            if(p==x) ans++;
        }
    }
    printf("%d",ans);
    return 0;
}
