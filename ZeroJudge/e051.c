#include <stdio.h>
#include <string.h>
int main()
{
    char word[1000];
    scanf("%s",word);
    for(int i=0;i<strlen(word);i++)
    {
        if(i==0||i==strlen(word)-1)
            printf("%c",word[i]);
        else
            printf("_");
    }
    return 0;
}
