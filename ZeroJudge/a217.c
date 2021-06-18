#include <stdio.h>
#include <string.h>
int main()
{
    char s[1001];
    while(gets(s)!=0)
    {
        int check=0,letter=0;
        for(int i=0;i<strlen(s);i++)
        {
            if(letter==0)
            {
                if('a'<=s[i]&&s[i]<='z')
                {
                    s[i]=s[i]-'a'+'A';
                    letter=1;
                }
            }
            else
            {
                if(s[i]=='?'||s[i]=='!'||s[i]=='.')
                    check=1;
                if(check==1&&'a'<=s[i]&&s[i]<='z')
                {
                    s[i]=s[i]-'a'+'A';
                    check=0;
                }
                if(s[i]=='i')
                {
                    if(('a'>s[i-1]||s[i-1]>'z')&&('a'>s[i+1]||s[i+1]>'z'))
                    {
                        if('A'>s[i-1]||s[i-1]>'Z')
                            s[i]='I';
                    }
                }
            }
        }
        printf("%s\n",s);
    }
    return 0;
}
