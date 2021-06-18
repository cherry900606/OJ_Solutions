#include <stdio.h>
#include <string.h>
int main()
{
    char s[15];
    while(scanf("%s",s))
    {
        if(s[0]=='-')
            break;
        else if(s[0]=='0'&&s[1]=='x')
        {
            int ans=0;
            for(int i=2;i<strlen(s);i++)
            {
                ans*=16;
                if('0'<=s[i]&&s[i]<='9')
                    ans+=s[i]-'0';
                else
                    ans+=s[i]-'A'+10;
            }
            printf("%d\n",ans);
        }
        else
        {
            int n=0;
            for(int i=0;i<strlen(s);i++)
                n=s[i]-'0'+n*10;
            printf("0x%X\n",n);
        }
    }
    return 0;
}
