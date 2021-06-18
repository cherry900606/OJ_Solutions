#include <stdio.h>

int main()
{
    int a,b,c,d;
    while(scanf("%d %d %d %d",&a,&b,&c,&d))
    {
        if(a==0&&b==0&&c==0&&b==0)
            break;
        else
            printf("%d\n",(((a-b)+(c-b)+(c-d)+(a<b)*40+(b>c)*40+(d>c)*40)*9+720+360));
    }
    return 0;
}
