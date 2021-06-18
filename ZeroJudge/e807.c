#include <stdio.h>

int main()
{
    float m=0,a=0,n=0,e=0,maxday=0,maxrain=0;
    for(int i=0;i<7;i++)
    {
        float tm,ta,tn,te,sum=0;
        scanf("%f %f %f %f",&tm,&ta,&tn,&te);
        sum=tm+ta+tn+te;
        if(sum>maxrain)
        {
            maxrain=sum;
            maxday=i+1;
        }
        m+=tm,a+=ta,n+=tn,e+=te;
    }
    printf("%.f\n",maxday);
    if(m>a&&m>n&&m>e)
        printf("morning\n");
    else if(a>m&&a>n&&a>e)
        printf("afternoon\n");
    else if(n>m&&n>a&&n>e)
        printf("night\n");
    else
        printf("early morning\n");
    return 0;
}
