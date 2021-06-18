#include <stdio.h>

int gcd(int a,int b)
{
    while((a%=b)!=0&&(b%=a)!=0);
    return a+b;
}
int main()
{
    int n,temp1,temp2;
    while(scanf("%d",&n)!=EOF)
    {
        scanf("%d",&temp1);
        for(int i=1;i<n;i++)
        {
            scanf("%d",&temp2);
            temp1=gcd(temp1,temp2);
        }
        printf("%d\n",temp1);
    }
    
    
    
    return 0;
}
