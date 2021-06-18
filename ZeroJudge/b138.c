#include <stdio.h>

int main()
{
    int x[10],height,ans=0;
    for(int i=0;i<10;i++)
        scanf("%d",&x[i]);
    scanf("%d",&height);
    for(int i=0;i<10;i++)
    {
        if(x[i]<=height+30)
            ans++;
    }
    printf("%d\n",ans);
    return 0;
}
