#include <stdio.h>

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        while(n--)
        {
            int e,f,c,all,change=0;
            scanf("%d %d %d",&e,&f,&c);
            all=e+f;
            while(all/c)
            {
                change+=all/c;
                all=all/c+all%c;
            }
            printf("%d\n",change);
        }
    }
    return 0;
}
