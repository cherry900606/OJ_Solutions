#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    if(n<=2500)
    {
        if(n%25==0)
            printf("1 %d 25\n",n/25);
        else
            printf("1 %d %d\n",n/25+1,n%25);
    }
    else if(n>2500&&n<=7500)
    {
        if((n-2500)%50==0)
            printf("2 %d 50\n",(n-2500)/50);
        else
            printf("2 %d %d\n",(n-2500)/50+1,(n-2500)%50);
    }
    else if(n>7500&&n<=10000)
    {
        if((n-7500)%25==0)
            printf("3 %d 25\n",(n-7500)/25);
        else
            printf("3 %d %d\n",(n-7500)/25+1,(n-7500)%25);
    }
    return 0;
}
