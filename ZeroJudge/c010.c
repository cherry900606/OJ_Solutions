#include <stdio.h>

int main()
{
    int temp,n[10000],i=0;
    while(scanf("%d",&temp)!=EOF)
    {
        n[i]=temp;
        for(int j=0;j<=i;j++)
        {
            int k=j;
            while(k>0&&n[k-1]>n[k])
            {
                int tmp=n[k];
                n[k]=n[k-1];
                n[k-1]=tmp;
                k--;
            }
        }
        
        if((i+1)%2!=0) //©_¼Æ
            printf("%d\n",n[i/2]);
        else
            printf("%d\n",(n[i/2]+n[i/2+1])/2);
        i++;
    }
    return 0;
}
