#include <stdio.h>

int main()
{
    int a,b,c,check=0;
    scanf("%d %d %d",&a,&b,&c);
    if((a&&b)==c)
    {
        printf("AND\n");
        check=1;
    }
    if((a||b)==c)
    {
        printf("OR\n");
        check=1;
    }
    if((a!=0)^(b!=0)==c)
    {
        printf("XOR\n");
        check=1;
    }
    if(check==0)
        printf("IMPOSSIBLE\n");
    return 0;
}
