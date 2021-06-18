#include <stdio.h>

int main()
{
    int a,b,c;
    while(~scanf("%d %d %d",&a,&b,&c))
    {
        int x1=a,y1=b*10+c,x2=a*10+b,y2=c,max=0;
        if(x1+y1>max)
            max=x1+y1;
        if(x1*y1>max)
            max=x1*y1;
        if(x2+y2>max)
            max=x2+y2;
        if(x2*y2>max)
            max=x2*y2;
        printf("%d\n",max);
    }
    return 0;
}
