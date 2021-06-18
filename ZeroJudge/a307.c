#include <stdio.h>

int main()
{
    int n,check=0;
    scanf("%d",&n);
    if(n==0)
        printf("0\n");
    if(n<0)
    {
        printf("-");
        n*=-1;
    }
    if(n>0)
    {
        while(n>0)
        {
            if(check==0)
            {
                if(n%10!=0)
                {
                    printf("%d",n%10);
                    check=1;
                }
            }
            else
                printf("%d",n%10);
            n/=10;
        }
        printf("\n");
    }
    return 0;
}
