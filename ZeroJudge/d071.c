#include <stdio.h>

int main()
{
    int y;
    while(scanf("%d",&y)!=EOF)
    {
        if(y==0)
            break;
        if(y%4==0 && y%100!=0 || y%400==0)
            printf("a leap year\n");
        else
            printf("a normal year\n");
    }
    return 0;
}
