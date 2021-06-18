#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int d1,m1,y1,d2,m2,y2,date=0;
        scanf("%d/%d/%d",&d1,&m1,&y1);
        scanf("%d/%d/%d",&d2,&m2,&y2);
        date=(y1-y2)-(m1<m2)-(m1==m2&&d2>d1);
        printf("Case #%d: ",i);
        if(date<0)
            printf("Invalid birth date\n");
        else if(date>130)
            printf("Check birth date\n");
        else
            printf("%d\n",date);
    }
    return 0;
}
