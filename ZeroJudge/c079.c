#include <stdio.h>

int main()
{
    int n,k,total=0,empty=0;
    while(scanf("%d %d",&n,&k)!=EOF)
    {
        total=empty=0;
        while(empty+n>k)
        {
            total+=n;
            empty+=n;
            n=empty/k;
            empty-=n*k;
        }
        total+=n;
        printf("%d\n",total);
    }
    return 0;
}
