#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int a,b,c,check=0;
        scanf("%d %d %d",&a,&b,&c);
        for(int i=a+1;i<b;i++)
        {
            if(i%c!=0)
            {
                printf("%d ",i);
                check=1;
            }
        }
        if(!check)
            printf("No free parking spaces.\n");
        else
            printf("\n");
    }
    return 0;
}
