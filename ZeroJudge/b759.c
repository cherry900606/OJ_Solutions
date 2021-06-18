#include <stdio.h>
#include <string.h>

int main()
{
    char x[1002];
    scanf("%s",x);
    int len=strlen(x);
    for(int i=0;i<len;i++)
    {
        for(int j=i;j<len;j++)
            printf("%c",x[j]);
        for(long long int j=0;j<i;j++)
            printf("%c",x[j]);
        printf("\n");
    }
    
    return 0;
}
