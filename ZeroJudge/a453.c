#include <stdio.h>
#include <math.h>
int main()
{
    int m;
    scanf("%d",&m);
    for(int i=0;i<m;i++)
    {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        int d=b*b-4*a*c;
        if(d<0)
            printf("No\n");
        else if((int)sqrt(d)==sqrt(d))
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
