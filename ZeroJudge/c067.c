#include <stdio.h>

int main()
{
    int n,m[50],high=0,move=0,i=1;
    while(scanf("%d",&n))
    {
        move=high=0;
        if(n==0)
            break;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&m[i]);
            high+=m[i];
        }
        high/=n;
        for(int i=0;i<n;i++)
        {
            if(m[i]-high>0)
                move+=m[i]-high;
            else
                move+=high-m[i];
        }
        printf("Set #%d\nThe minimum number of moves is %d.\n",i,move/2);
        i++;
    }
    
    return 0;
}
