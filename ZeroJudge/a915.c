#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int x[n],y[n];
    for(int i=0;i<n;i++)
        scanf("%d %d",&x[i],&y[i]);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(x[i]<x[j])
            {
                int temp=x[i];
                x[i]=x[j];
                x[j]=temp;
                temp=y[i];
                y[i]=y[j];
                y[j]=temp;
            }
            else if(x[i]==x[j]&&y[i]<y[j])
            {
                int temp=y[i];
                y[i]=y[j];
                y[j]=temp;
            }
        }
    }
    
    for(int i=0;i<n;i++)
    {
        printf("%d %d\n",x[i],y[i]);
    }
    return 0;
}
