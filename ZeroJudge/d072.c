#include <stdio.h>

int main()
{
    int t,y;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%d",&y);
        printf("Case %d: ",i);
        if(y%4==0 && y%100!=0 || y%400==0)
            printf("a leap year\n");
        else
            printf("a normal year\n");
    }
    return 0;
}
