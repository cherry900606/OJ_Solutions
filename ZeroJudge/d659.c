#include <stdio.h>

int main()
{
    int t,n[3];
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d %d %d",&n[0],&n[1],&n[2]);
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<3;k++)
            {
                if(n[j]>n[k])
                {
                    int temp=n[j];
                    n[j]=n[k];
                    n[k]=temp;
                }
            }
        }
        printf("Case %d: %d\n",i+1,n[1]);
    }
    
    return 0;
}
