#include <stdio.h>

int main()
{
    int a1,an,d;
    scanf("%d %d %d",&a1,&an,&d);
    if(a1==an)
        printf("%d",a1);
    else if(d>=0)
    {
        for(int i=a1;i<=an;i+=d)
            printf("%d ",i);
    }
    else
    {
        for(int i=a1;i>=an;i+=d)
            printf("%d ",i);
    }
    return 0;
}
