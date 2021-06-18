#include <stdio.h>
#include <string.h>
int main()
{
    char s[10000];
    while(scanf("%s",s)!=EOF)
    {
        char c=s[0],maxc=s[0];
        int count=0,maxcount=0;
        for(int i=0;i<strlen(s);i++)
        {
            if(s[i]==c)
            {
                count++;
            }
            else
            {
                if(count>maxcount)
                {
                    maxcount=count;
                    maxc=c;
                }
                count=1;
                c=s[i];
            }
        }
        if(count>maxcount)
        {
            maxcount=count;
            maxc=c;
        }
        printf("%c %d\n",maxc,maxcount);
    }

    return 0;
}
