#include <stdio.h>

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int t=0;
        printf("%d is ",n);
        while(t<100&&n!=1)
        {
            t++;
            int temp=0;
            while(n>0)
            {
                temp+=(n%10)*(n%10);
                n/=10;
            }
            n=temp;
        }
        if(t>=100)
            printf("an unhappy number\n");
        else
            printf("a happy number\n");
    }

    return 0;
}
