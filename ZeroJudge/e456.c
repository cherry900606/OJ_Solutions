#include <stdio.h>
#include <string.h>
int main()
{
    char a[50];
    gets(a);
    for(int i=0;i<strlen(a);i++)
    {
        if(a[i]==' ')
            printf(" little, ");
        else
            printf("%c",a[i]);
    }
    printf(" little Indians");
    return 0;
}
