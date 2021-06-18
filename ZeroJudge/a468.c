#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        char m1[12],m2[12];
        int d1,d2,y1,y2;
        scanf("%s %d, %d",m1,&d1,&y1);
        if((m1[0]=='J'&&m1[1]=='a')||(m1[0]=='F'))
            y1--;
        int t1=y1/400-y1/100+y1/4;
        scanf("%s %d, %d",m2,&d2,&y2);
        if((m2[0]=='J'&&m2[1]=='a')||(m2[0]=='F'))
            y2--;
        if(m2[0]=='F'&&d2==29)
            y2++;
        int t2=y2/400-y2/100+y2/4;
        printf("Case %d: %d\n",i,t2-t1);
    }
    return 0;
}
