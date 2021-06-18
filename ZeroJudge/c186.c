#include <stdio.h>
#include <string.h>
int main()
{
    char name[500];
    gets(name);
    for(int i=0;i<strlen(name);i++)
    {
        if(name[i]==' ')
            printf("\n");
        else
            printf("%c",name[i]);
    }
    return 0;
}
