#include <stdio.h>
#include <string.h>
int main()
{
    int t=1;
    char languague[20];
    while(scanf("%s",languague)==1)
    {
        
        if(languague[0]=='#')
            break;
        printf("Case %d: ",t++);    
        if(!strcmp(languague,"HOLA"))
            printf("SPANISH\n");
        else if(!strcmp(languague,"CIAO"))
            printf("ITALIAN\n");
        else if(!strcmp(languague,"HALLO"))
            printf("GERMAN\n");
        else if(!strcmp(languague,"HELLO"))
            printf("ENGLISH\n");
        else if(!strcmp(languague,"BONJOUR"))
            printf("FRENCH\n");
        else if(!strcmp(languague,"ZDRAVSTVUJTE"))
            printf("RUSSIAN\n");
        else
            printf("UNKNOWN\n");
    }
    
    return 0;
}
