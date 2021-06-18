#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000],c;
    
    while(scanf("%s",s)!=EOF)
    {
        for(int i=strlen(s)-1;i>=0;i--)
            printf("%c",s[i]);
        c=getchar();
        if(c==' ')
            printf(" ");
        else if(c=='\n')
            printf("\n");
    }
    return 0;
}
