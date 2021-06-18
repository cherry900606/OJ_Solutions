#include <stdio.h>

int main()
{
    float fo,fe,fa;
    float m;
    while(scanf("%f %f %f",&fo,&fe,&fa))
    {
        if(fo==0&&fe==0&&fa==0)
            break;
        m=fo/fe;
        printf("%.2f %.2f\n",m,fa/m);
    }
    return 0;
}
