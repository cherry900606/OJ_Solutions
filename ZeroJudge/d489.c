#include <stdio.h>

int main()
{
    int a,b,c;
    int s;
    scanf("%d %d %d",&a,&b,&c);
    s=(a+b+c)/2;
    printf("%d",s*(s-a)*(s-b)*(s-c));
    return 0;
}
