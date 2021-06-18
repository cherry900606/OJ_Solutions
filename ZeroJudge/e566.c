#include <stdio.h>

int main()
{
    int n,m;
    while(scanf("%d %d",&n,&m)!=EOF)
    {
        int track[10000],len=0;
        if(n<2||m<2)
            printf("Boring!\n");
        else
        {
            while(n%m==0)
            {
                track[len]=n;
                n/=m;
                len++;
            }
            if(n==1)
            {
                track[len]=1;
                for(int i=0;i<=len;i++)
                    printf("%d ",track[i]);
                printf("\n");
            }
            else
                printf("Boring!\n");
        }
    }
    return 0;
}
