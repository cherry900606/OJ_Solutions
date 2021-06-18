#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,x1=0,x2=0,temp,t=1;
        scanf("%d",&n);
        temp=n;
        while(temp>0)
        {
            x1+=temp%2;
            temp/=2;
        }
        while(n>0)
        {
            temp+=(n%10)*t;
            t*=16;
            n/=10;
        }
        while(temp>0)
        {
            x2+=temp%2;
            temp/=2;
        }
        printf("%d %d\n",x1,x2);
    }
    return 0;
}
