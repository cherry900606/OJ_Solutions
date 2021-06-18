#include <stdio.h>

int main()
{
    int r;
    scanf("%d",&r);
    while(r--)
    {
        int s,n[500],sum=0;
        scanf("%d",&s);
        for(int i=0;i<s;i++)
            scanf("%d",&n[i]);
        for(int i=0;i<s;i++)
        {
            for(int j=0;j<s;j++)
            {
                if(n[i]<n[j])
                {
                    int temp=n[i];
                    n[i]=n[j];
                    n[j]=temp;
                }
            }
        }
        if(s%2==0)
        {
            for(int i=0;i<s;i++)
            {
                int d=n[i]-(n[s/2]+n[s/2-1])/2;
                if(d<0)
                    d*=-1;
                sum+=d;
            }
        }
        else
        {
            for(int i=0;i<s;i++)
            {
                int d=n[i]-n[s/2];
                if(d<0)
                    d*=-1;
                sum+=d;
            }
        }
        printf("%d\n",sum);
    }

    return 0;
}
