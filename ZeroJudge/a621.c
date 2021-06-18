#include<stdio.h>

int main()
{
    int n,ans=1;
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        printf("2^%d = %d\n",i,ans);
        ans*=2;
    }
    return 0;
}
