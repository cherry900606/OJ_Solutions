#include <stdio.h>

int main()
{
    int a,b,c,ans=0;
    char s[15];
    while(gets(s)!=0)
    {
        char command;
        sscanf(s,"%d%c%d=%d",&a,&command,&b,&c);
        if(command=='+')
        {
            if(a+b==c)
                ans++;
        }
        else
        {
            if(a-b==c)
                ans++;
        }
    }
    printf("%d\n",ans);
    return 0;
}
