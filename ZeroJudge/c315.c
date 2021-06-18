#include <stdio.h>

int main()
{
    int n,x=0,y=0;
    scanf("%d",&n);
    while(n--)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        if(a==0)
            y+=b;
        else if(a==1)
            x+=b;
        else if(a==2)
            y-=b;
        else
            x-=b;
    }
    printf("%d %d\n",x,y);
    return 0;
}
