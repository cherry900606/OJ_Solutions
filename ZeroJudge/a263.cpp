#include <stdio.h>
int isleap(int year)
{
    if((year%400==0)||((year%100!=0)&&(year%4==0)))
        return 1;
    return 0;
}
int countdaysum(int y,int m,int d)
{
    int dayofmonth[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int sum=(y-1)*365;
    sum+=(y-1)/4;
    sum-=(y-1)/100;
    sum+=(y-1)/400;
    for(int i=1;i<m;i++)
        sum+=dayofmonth[i];
    if(m>2&&isleap(y))
        sum++;
    sum+=d;
    return sum;
}
int main()
{
    int y1,m1,d1,y2,m2,d2;
    while(scanf("%d %d %d %d %d %d",&y1,&m1,&d1,&y2,&m2,&d2)!=EOF)
    {
        int sum1,sum2;
        sum1=countdaysum(y1,m1,d1);
        sum2=countdaysum(y2,m2,d2);
        if(sum1>sum2)
            printf("%d\n",sum1-sum2);
        else
            printf("%d\n",sum2-sum1);
    }
    return 0;
}
