#include <stdio.h>
int gcd(int a,int b)
{
    while((a%=b)!=0&&(b%=a)!=0);
    return a+b;
}
int main()
{
    int x1,y1,x2,y2,a,b,c,d;
    while(scanf("%d %d %d %d",&x1,&y1,&x2,&y2)!=EOF)
    {
        a=(x2-x1)*(x2-x1);b=(y2-y1);
        c=-2*x1*(y2-y1);d=(y2-y1)*x1*x1+y1*(x2-x1)*(x2-x1);
        int g=gcd(a,b);
        g=gcd(g,c);
        g=gcd(g,d);
        printf("%dy = %dx^2 + %dx + %d\n",a/g,b/g,c/g,d/g);
    }
    return 0;
}
