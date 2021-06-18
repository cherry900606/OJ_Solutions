#include <stdio.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d\n",(100-a+b)%100);
    return 0;
}
