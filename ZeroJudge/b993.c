#include <stdio.h>

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int max=0,temp;
        while(n--)
        {
            scanf("%d",&temp);
            if(temp>max)
                max=temp;
        }
        printf("%d\n",max);
    }
    return 0;
}
