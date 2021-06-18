#include <stdio.h>

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        if(n<0)
        {
            printf("-1\n",n);
            break;
        }
        else
            printf("%o\n",n);
    }
    return 0;
}
