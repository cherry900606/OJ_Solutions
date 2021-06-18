#include <stdio.h>
int main()
{
    int a,b,ans=0;
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        int temp=a;
        a=b;
        b=temp;
    }
    for(int i=a;i<=b;i++)
    {
        if(i%2==0)
            ans+=i;
    }
    printf("%d\n",ans);
    return 0;
}
