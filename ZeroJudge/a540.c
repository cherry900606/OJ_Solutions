#include <stdio.h>

int main()
{
    int n;
    while(scanf("%d",&n))
    {
        if(n==0)
            break;
        int m=0,temp=0,max=0;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&temp);
            m+=temp;
            if(m<0)
                m=0;
            if(max<m)
                max=m;
        }
        if(max<=0)
            printf("Losing streak.\n");
        else
            printf("The maximum winning streak is %d.\n",max);
    }
    return 0;
}
