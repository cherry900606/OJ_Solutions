#include <stdio.h>
#include <string.h>
int main()
{
    char name[200],greet[20];
    gets(name);
    gets(greet);
    for(int i=0;i<strlen(name);i++)
    {
        if(i==0)
            printf("%s, ",greet);
        if(name[i]==' ')
            printf("\n%s, ",greet);
        else
            printf("%c",name[i]);
    }
    return 0;
}
