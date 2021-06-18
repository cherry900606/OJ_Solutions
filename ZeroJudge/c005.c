#include <stdio.h>

int main()
{
    int n,f;
    long long int money,area,anaimal,level;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        money=0;
        scanf("%d",&f);
        for(int j=0;j<f;j++)
        {
            scanf("%lld %lld %lld",&area,&anaimal,&level);
            money+=area*level;
        }
        printf("%lld\n",money);
    }
    return 0;
}
