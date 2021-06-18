#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    while(scanf("%d",&n)&&n>=0)
    {
        char ans[101]={'\0'};
        if(n==0)
            printf("0\n");
        else
        {
            for(int i=0;n>0;i++)
            {
                ans[i]=n%3+'0';
                n/=3;
            }
            for(int i=strlen(ans)-1;i>=0;i--)
                printf("%c",ans[i]);
            printf("\n");
        }
    }
    return 0;
}
