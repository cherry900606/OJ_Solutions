#include <stdio.h>
#include <string.h>
int main()
{
    int flag=0,num=0,n;
    char s[31];
    while(scanf("%s",s)&&s[0]!='~')
    {

        if(s[0]=='#')
        {
            printf("%d\n",num);
            num=0;
        }
        else if(strlen(s)==1)
        {
            flag=1;
        }
        else if(strlen(s)==2)
        {
            flag=0;
        }
        else
        {
            n=strlen(s)-2;
            for(int i=0;i<n;i++)
                num=num*2+flag;
        }
    }

    return 0;
}
