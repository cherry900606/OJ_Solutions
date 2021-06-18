#include <stdio.h>
#include <math.h>

int main()
{
    double d,l;
    while(scanf("%lf %lf",&d,&l)!=EOF)
    {
        double ans=(l/2)*sqrt(l*l-d*d)/2*acos(-1);
        printf("%.3lf\n",ans);
    }
    return 0;
}
