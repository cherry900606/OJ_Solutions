#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        char s[100000];
        scanf("%s",s);
        for(int i=0;i<strlen(s);i++)
        {
            if('a'<=s[i]&&s[i]<='z')
                printf("%c",s[i]-'a'+'A');
            else
                printf("%c",s[i]-'A'+'a');
        }
        printf("\n");
    }
    return 0;
}
