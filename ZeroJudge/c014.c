#include <stdio.h>

int main()
{
    int a,b;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        if(a==0&&b==0)
            break;
        int ans=0,left=0;
        while(a>0||b>0)
        {
            if(a%10+b%10+left>=10)
            {
                ans+=1;
                left=1;
            }
            else
                left=0;
            a/=10;
            b/=10;
        }
        if(ans==0)
            printf("No ");
        else
            printf("%d ",ans);
        printf("carry operation");
        if(ans>1)
            printf("s");
        printf(".\n");
    }
    return 0;
}
