#include <stdio.h>

int main()
{
    double t1,t2,t3,x1,x2,x3;
    while(scanf("%lf %lf %lf %lf %lf",&t1,&t2,&t3,&x1,&x3)!=EOF)
    {
        x2=x1-((t1-t2)*(x1-x3)/(t1-t3));
        printf("%lf\n",x2);
    }
    return 0;
}
