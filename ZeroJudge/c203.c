#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,sum=0;
        scanf("%d",&n);
        for(int i=1;i<n;i++)
        {
            if(n%i==0)
                sum+=i;
        }
        if(n==sum)
            printf("perfect\n");
        else if(sum<n)
            printf("deficient\n");
        else
            printf("abundant\n");
    }
    return 0;
}
