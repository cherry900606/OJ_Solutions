#include <stdio.h>
unsigned int reverse(unsigned int n)
{
    int rev=0;
    while(n>0)
    {
        rev=n%10+rev*10;
        n/=10;
    }
    return rev;
}
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int t=0;
        unsigned int p,rev=0;
        scanf("%u",&p);
        rev=reverse(p);
        while(1)
        {
            p+=rev;
            t++;
            rev=reverse(p);
            if(rev==p)
                break;
        }
        printf("%d %u\n",t,p);
    }

    return 0;
}
