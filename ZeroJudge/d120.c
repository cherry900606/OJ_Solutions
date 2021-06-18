#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    while(scanf("%d",&n)&&n)
    {
        printf("%d : ",n);
        int ans=0;
        for(int i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
                ans++;
            while(n%i==0)
                n/=i;
        }
        if(n!=1)
            ans++;
        printf("%d\n",ans);
    }
    return 0;
}
