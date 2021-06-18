#include <stdio.h>

int main()
{
    int n,ans=1,m=0;
    for(int i=0;;i++)
    {
        ans=1;
        m=0;
        scanf("%d",&n);
        if(n<0)
            break;
        while(1)
        {
            if(ans>=n)
            {
                break;
            }
            ans*=2;
            m++;
        }
        printf("Case %d: %d\n",i+1,m);
    }
   
    return 0;
}
