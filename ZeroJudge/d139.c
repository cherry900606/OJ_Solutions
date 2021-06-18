#include <stdio.h>

int main()
{
    char s[1001];
    while(gets(s)!=0)
    {
        char mark=s[0];
        int count=0;
        for(int i=0;s[i];i++)
        {
            if(s[i]==mark)
                count++;
            else
            {
                if(count>2)
                    printf("%d%c",count,mark);
                else if(count==2)
                    printf("%c%c",mark,mark);
                else if(count==1)
                    printf("%c",mark);
                mark=s[i];
                count=1;
            }
        }
        if(count>2)
            printf("%d%c",count,mark);
        else if(count==2)
            printf("%c%c",mark,mark);
        else if(count==1)
            printf("%c",mark);
        printf("\n");
    }

    return 0;
}
