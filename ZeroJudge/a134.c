#include <stdio.h>

int main()
{
    int fib[40],n;
    for(int i=0;i<40;i++)
    {
        if(i<2)
            fib[i]=i;
        else
            fib[i]=fib[i-1]+fib[i-2];
    }
    scanf("%d",&n);
    while(n--)
    {
        int check=0,temp;
        scanf("%d",&temp);
        printf("%d = ",temp);
        for(int i=39;i>=2;i--)
        {
            if(temp/fib[i]==1)
            {
                printf("1");
                temp%=fib[i];
                check=1;
            }
            else if(check==1)
                printf("0");
        }
        printf(" (fib)\n");
    }
    return 0;
}
