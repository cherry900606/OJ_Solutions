#include <stdio.h>

int main()
{
    double a,b,c,d,e,f,x,y,z;
    scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f);
    x=a*e-b*d;
    y=c*e-b*f;
    z=a*f-c*d;
    if(x==0)
    {
        if(y!=0||z!=0)
            printf("No answer\n");
        else
            printf("Too many\n");
    }
    else
    {
        printf("x=%.2lf\n",y/x);
        printf("y=%.2lf\n",z/x);
    }
    return 0;
}
