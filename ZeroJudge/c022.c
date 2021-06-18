#include <stdio.h>

int main()
{
    int t,n=1;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,sum=0;
        scanf("%d %d",&a,&b);
        for(int i=a;i<=b;i++)
        {
            if(i%2)
                sum+=i;
        }
        printf("Case %d: %d\n",n++,sum);
    }
    return 0;
}
