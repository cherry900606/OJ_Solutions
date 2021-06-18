#include <stdio.h>
#include <math.h>

int main()
{
    
    double m;
    while(scanf("%lf",&m)!=EOF)
    {
        int check=0;
        if(m<100)
            check=1;
        if(m<=100)
            m*=0.9;
        else if(m<=500)
            m*=0.8;
        else
            m*=0.6;
        if(check)
            m+=8;
        m+=1e-6;
        printf("$%.2lf\n",floor(m*100)/100);
    }
    return 0;
}
