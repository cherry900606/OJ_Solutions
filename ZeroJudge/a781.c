#include <stdio.h>

int main()
{
    int n,c=0;
    while(scanf("%d",&n)&&n!=0)
    {
        if(c)
            printf("\n");
        c++;
        for(int i=0;i<8;i++)
        {
            for(int p=0;p<n;p++)
            {
                for(int j=0;j<8;j++)
                {
                    for(int q=0;q<n;q++)
                    {
                        if((i+j)%2)
                            printf(".");
                        else
                            printf("#");
                    }
                }
                printf("\n");
            }
        }
    }
    return 0;
}
