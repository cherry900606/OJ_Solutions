#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000];
    while(gets(s)!=0)
    {
        int c=0,i;
        for(i=2;i<strlen(s);i++)
        {
            if(s[i]=='(')
                c++;
            else if(s[i]==')')
                c--;
            if(c==0)
                break;
        }
        for(int j=i+2;j<strlen(s)-1;j++)
            printf("%c",s[j]);
        printf(" ");
        for(int j=0;j<=i;j++)
            printf("%c",s[j]);
        printf(";\n");
    }

    return 0;
}
