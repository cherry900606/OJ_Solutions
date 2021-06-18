#include <stdio.h>

int main()
{
    int a,b;
    while(scanf("%d %d",&a,&b))
    {
        int n=1,ans=0;
        if(a==0&&b==0)
            break;
        while(n*n<a)
            n++;
        for(int i=a;i<=b;i++)
        {
            if(n*n>b)
                break;
            ans++;
            n++;
        }
        printf("%d\n",ans);
    }
    return 0;
}
