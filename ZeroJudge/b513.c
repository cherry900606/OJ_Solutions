#include <stdio.h>

void prime(int);

int main()
{
    int n,x;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x);
        prime(x);
    }
    
    return 0;
}

void prime(int n)
{
    int check=0;
    if(n<=2)
        printf("N\n");
    else
    {
        for(int i=2;i<n;i++)
        {
            if(n%i==0)
            {
                printf("N\n");
                check=1;
                break;
            }
        }
        if(check==0)
            printf("Y\n");
    }
}
