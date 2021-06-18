#include <stdio.h>
int main()
{
    float v,r;
    while(scanf("%f %f",&v,&r)!=EOF)
    {
        printf("%.4f\n",(float)v/r*1000);
    }
    return 0;
}
