#include <stdio.h>
#include <string.h>
int main()
{
    char link[10],word[100];
    scanf("%s",link);
    getchar();
    gets(word);
    for(int i=0;i<strlen(word);i++)
    {
        if(word[i]==' ')
            printf(" %s ",link);
        else
            printf("%c",word[i]);
    }
    return 0;
}
