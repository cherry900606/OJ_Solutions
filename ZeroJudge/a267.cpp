#include <stdio.h>

int main()
{
    int n;
    while(scanf("%d",&n)&&n!=-1)
    {
        int now=5+n*5,total=now,oilbox=n,i;
        for(i=1;now>0;i++)
        {
            now--;
            if(oilbox>0)
            {
                now-=oilbox;
                oilbox=n-(total-now)/5;
            }
        }
        printf("%d\n",i-1);
    }
    return 0;
}
