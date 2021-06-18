#include <stdio.h>
#include <string.h>
int main()
{
    char s[500];
    scanf("%s",s);
    if(strlen(s)%2)
        printf("NO\n");
    else
    {
        int check=0;
        for(int i=0;i<strlen(s);i++)
        {
            if(s[i]!=s[strlen(s)-i-1])
            {
                check=1;
                break;
            }
        }
        if(check)
            printf("NO\n");
        else
        {
            printf("YES\n");
            for(int i=0;i<strlen(s)/2;i++)
                printf("%c",s[i]);
        }
    }
    return 0;
}
