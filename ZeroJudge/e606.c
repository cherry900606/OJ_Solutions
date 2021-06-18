#include <stdio.h>

int main()
{
    int n,m[1000000],sum=0;
    while(scanf("%d",&n)!=EOF)
    {
        sum=0;
        for(int i=0;i<n;i++)
            scanf("%d",&m[i]);
        for(int i=0;i<n;i++)
        {
           
            for(int j=i;j>0&&m[j-1]>m[j];j--)
            {
                int temp=m[j];
                m[j]=m[j-1];
                m[j-1]=temp;
            }
        }
        if(n%2==0)
        {
            printf("%d ",m[n/2-1]);
            for(int i=0;i<n;i++)
            {
                if(m[i]==m[n/2-1])
                    sum++;
            }
            printf("%d ",sum);
            printf("%d\n",m[n/2]-m[n/2-1]+1);
        }
        else
        {
            printf("%d ",m[n/2]);
            for(int i=0;i<n;i++)
            {
                if(m[i]==m[n/2])
                    sum++;
            }
            printf("%d ",sum);
            printf("1\n");
        }
    }
    
    return 0;
}
