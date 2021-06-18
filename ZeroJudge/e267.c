#include <stdio.h>
#include <string.h>
int main()
{
    int g;
    while(scanf("%d",&g)&&g!=0)
    {
        char s[101];
        scanf("%s",s);
        for(int i=1;i<=g;i++)
        {
            for(int j=0;j<strlen(s)/g;j++)
            {
                printf("%c",s[(strlen(s)/g)*i-1-j]);
            }
        }
        printf("\n");
    }
    return 0;
}
