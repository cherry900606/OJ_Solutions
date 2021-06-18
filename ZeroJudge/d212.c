#include <stdio.h>

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        unsigned long long int f[100];
        for(int i=0;i<=n;i++)
        {
            if(i<2)
                f[i]=1;
            else
                f[i]=f[i-1]+f[i-2];
        }
        printf("%llu\n",f[n]);
    }
    return 0;
}
