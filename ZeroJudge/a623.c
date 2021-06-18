#include <stdio.h>

int main()
{
    int n,m;
    while(scanf("%d %d",&n,&m)!=EOF)
    {
        int d=n-m,up=1,down=1;
        if(d>n-d)
            d=n-d;
        for(int i=0;i<d;i++)
        {
            up*=(n-i);
            down*=(i+1);
        }
        printf("%d\n",up/down);
    }
    return 0;
}
