#include <stdio.h>

int main()
{
    int n,sum=1;
    while(scanf("%d",&n)!=EOF)
    {
        sum=1;
        printf("%d! = ",n);
        if(n==0)
            printf("1 = 1\n");
        else
        {
            for(int i=n;i>0;i--)
            {
                if(i!=1)
                    printf("%d * ",i);
                else
                    printf("1 = ");
                sum*=i;
                
            }
            printf("%d\n",sum);
        }
    
    }
    
    return 0;
}
