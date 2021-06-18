#include <stdio.h>
int main()
{
    int a,b,ans=0;
    scanf("%d %d",&a,&b);
    for(int i=a;i<=b;i++)
    {
        if(i%2==0)
            ans+=i;
    }
    printf("%d\n",ans);
    return 0;
}
