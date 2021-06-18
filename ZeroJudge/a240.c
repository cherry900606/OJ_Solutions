#include <stdio.h>

int main()
{
    int m,n,sum,k=1;
    scanf("%d",&m);
    for(int i=0;i<m;i++)
    {
        sum=0;
        k=1;
        scanf("%d",&n);
        for(int j=0;j<n;j++)
        {
            sum+=k/17;
            
            k%=17;
            k*=10;
            
        }
        printf("%d %d\n",k/17,sum+k/17);
    }
    
    return 0;
}
