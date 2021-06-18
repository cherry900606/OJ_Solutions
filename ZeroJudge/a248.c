#include <stdio.h>

int main()
{
    int a,b,n;
    while(scanf("%d %d %d",&a,&b,&n)!=EOF)
    {
        printf("%d.",a/b);
        a%=b;
        for(int i=0;i<n;i++)
        {
            a*=10;
            printf("%d",a/b);
            a%=b;
        }
        printf("\n");
        
    }
    
    return 0;
}
