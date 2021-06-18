#include <stdio.h>

int main()
{
    long long int t,n,k,num=0,up=1,down=1;
    scanf("%lld",&t);
    for(int i=0;i<t;i++)
    {
        up=down=1;
        scanf("%lld %lld",&n,&k);
        if(k<n-k)
            num=k;
        else
            num=n-k;
        for(int j=0;j<num;j++)
        {
            up*=n--;
            down*=j+1;
        }
        if(num==0)
            printf("1\n");
        else
            printf("%lld\n",up/down);
    }
    return 0;
}
