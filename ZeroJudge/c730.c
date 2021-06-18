#include <stdio.h>

int main()
{
    int apple[10],tall,ans=0;
    for(int i=0;i<10;i++)
        scanf("%d",&apple[i]);
    scanf("%d",&tall);
    for(int i=0;i<10;i++)
    {
        if(apple[i]<=tall+30)
            ans++;
    }
    printf("%d\n",ans);
    return 0;
}
