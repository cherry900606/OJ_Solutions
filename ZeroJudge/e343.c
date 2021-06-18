#include <stdio.h>

int main()
{
    float bmi;
    float w,h;
    scanf("%f %f",&w,&h);
    h*=0.01;
    h*=h;
    bmi=(float)w/h;
    printf("%.1f\n",bmi);
    return 0;
}
