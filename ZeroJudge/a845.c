#include <stdio.h>

int main()
{
    int n,d[200],t,temp1,temp2;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&d[i]);
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&temp1,&temp2);
        printf("%d\n",d[temp1]+d[temp2]);
    }
    return 0;
}
