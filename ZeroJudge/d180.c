#include <stdio.h>

int main()
{
    int n,left=0,right=0,temp;
    scanf("%d",&n);
    n/=2;
    while(n--)
    {
        scanf("%d",&temp);
        left+=temp;
        scanf("%d",&temp);
        right+=temp;
    }
    if(left>right)
        printf("left\n");
    else
        printf("right\n");
    return 0;
}
