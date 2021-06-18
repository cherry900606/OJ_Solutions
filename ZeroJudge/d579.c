#include <stdio.h>

int main()
{
    double n;
    while(scanf("%lf",&n)!=EOF)
    {
        printf("|%.4lf|=",n);
        if(n<0)
            printf("%.4lf\n",n*-1);
        else
            printf("%.4lf\n",n);
    }
    return 0;
}
