#include <stdio.h>
#include <string.h>
int main()
{
    int blank=1;
    char name[200];
    gets(name);
    for(int i=0;i<strlen(name);i++)
    {
        if(blank==1)
        {
            printf("%c",name[i]-'a'+'A');
            blank=0;
        }
        else if(name[i]==' ')
        {
            printf("\n");
            blank=1;
        }
        else
            printf("%c",name[i]);
    }
    return 0;
}
