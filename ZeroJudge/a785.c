#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000];
    while(gets(s)!=0)
    {
        if(s[0]=='E'&&s[1]=='N'&&s[2]=='D')
            break;
        int m;
        for(m=0;s[m]!='-';m++);
        for(int i=0;i<m-1;i++)
            printf("%c",s[i]);
        if(s[m-1]=='a')
        {
            if(s[m+1]=='a'||s[m+1]=='e'||s[m+1]=='y') printf("a");
            else if(s[m+1]=='i') printf("ai");
            else printf("w");//caution this case (ou)
        }
        else if(s[m-1]=='e')
        {
            if(s[m+1]=='a'||s[m+1]=='y') printf("y");
            else if(s[m+1]=='w') printf("w");
            else if(s[m+1]=='e'||s[m+1]=='i') printf("ei");
            else printf("ou");
        }
        else
        {
            if(s[m+1]=='i') printf("oi");
            else if(s[m+1]=='a'||s[m+1]=='y'||s[m+1]=='w') printf("w");
            else printf("ou");
        }
        if(s[m+1]=='o'&&s[m+2]=='u') m++;
        for(int i=m+2;i<strlen(s);i++)
        {
            printf("%c",s[i]);
        }
        printf("\n");
    }
    return 0;
}
