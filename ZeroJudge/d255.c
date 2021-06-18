#include <stdio.h>
int gcd(int a,int b)
{
    while((a%=b)!=0&&(b%=a)!=0);
    return a+b;
}
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)
            break;
        int g=0;
        for(int i=1;i<n;i++)
        {
            for(int j=i+1;j<=n;j++)
                g+=gcd(i,j);
        }
        printf("%d\n",g);
    }
    return 0;
}
