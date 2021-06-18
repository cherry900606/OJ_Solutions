#include <stdio.h>

int main()
{
    int k;
    while(scanf("%d",&k)!=EOF)
    {
        int i;
        double sn=0;
        for(i=1;;i++)
        {
            
            sn+=1./i;
            if(sn>k)
                break;
        }
        printf("%d\n",i);
    }
    return 0;
}
