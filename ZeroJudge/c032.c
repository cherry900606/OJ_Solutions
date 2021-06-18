#include <stdio.h>
int main()
{
    int n;
    puts("PERFECTION OUTPUT");
    while(scanf("%d",&n)&&n!=0)
    {
        int sum=0;
        for(int i=1;i<n;i++)
        {
            if(n%i==0)
                sum+=i;
        }
        printf("%5d  ",n);
        if(n==sum)
            printf("PERFECT\n");
        else if(sum<n)
            printf("DEFICIENT\n");
        else
            printf("ABUNDANT\n");
    }
    puts("END OF OUTPUT");
    return 0;
}
