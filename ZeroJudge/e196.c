#include <stdio.h>

int main()
{
    int n,m,s[2601]={0},ans=0;
    scanf("%d %d",&n,&m);
    for(int i=0;i<m;i++)
    {
        int temp;
        scanf("%d",&temp);
        s[temp]++;
    }
    for(int i=1;i<=n;i++)
    {
        if(s[i]!=2)
            ans++;
    }
    printf("%d\n",ans);
    return 0;
}
