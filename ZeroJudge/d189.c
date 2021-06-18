#include <stdio.h>

int main()
{
    int n,empty=0,total=0;
    while(scanf("%d",&n)!=EOF)
    {
       total=empty=0;
       while(n+empty>=3)
       {
           total+=n;
           empty+=n;
           n=empty/3;
           empty-=n*3;
       }
       total+=n;
       if(empty+n==2)
        total+=1;
        printf("%d\n",total);
    }

    return 0;
}
