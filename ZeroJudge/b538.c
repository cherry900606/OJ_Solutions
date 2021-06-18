#include <stdio.h>
int gcd(int a,int b)
{
    while((a%=b)!=0&&(b%=a)!=0);
    return a+b;
}
int main()
{
    int a,b,c,d,up,down;
    char command;
    while(scanf("%d %d %d %d %c",&a,&b,&c,&d,&command)!=EOF)
    {
        if(command=='+')
        {
            up=a*d+c*b;
            down=b*d;
        }
        else if(command=='-')
        {
            up=a*d-c*b;
            down=b*d;
        }
        else if(command=='*')
        {
            up=a*c;
            down=b*d;
        }
        else
        {
            up=a*d;
            down=b*c;
        }
        int g=gcd(up,down);
        up/=g,down/=g;
        if(down<0)
            up=-up,down=-down;
        if(down==1)
            printf("%d\n",up);
        else
            printf("%d/%d\n",up,down);
    }

    return 0;
}
