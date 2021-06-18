#include <stdio.h>

int main()
{
    int t,c=1;
    scanf("%d",&t);
    while(t--)
    {
        char web[10][101];
        int r[10],max=0;
        for(int i=0;i<10;i++)
        {
            scanf("%s %d",web[i],&r[i]);
            if(r[i]>max)
                max=r[i];
        }
        printf("Case #%d:\n",c++);
        for(int i=0;i<10;i++)
        {
            if(r[i]==max)
                printf("%s\n",web[i]);
        }
    }
    return 0;
}
