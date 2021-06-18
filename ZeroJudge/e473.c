#include <stdio.h>
#include <math.h>
int main()
{
    int a,b;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        printf("%d\n",(int)(b*log10(a)+1));
    }
    
    return 0;
}
