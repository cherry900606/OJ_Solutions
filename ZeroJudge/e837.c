#include <stdio.h>
#include <string.h>
int main()
{
    char s[10001];
    scanf("%s",s);
    char mark=s[0],maxmark=s[0];
    int l=1,ml=1;
    for(int i=1;s[i];i++)
    {
        if(s[i]==(mark+l))
            l++;
        else
        {
            if(l>=ml)
            {
                maxmark=mark;
                ml=l;
            }
            mark=s[i];
            l=1;
        }
    }
    if(l>=ml)
    {
        maxmark=mark;
        ml=l;
    }
    printf("%d ",ml);
    for(int i=0;i<ml;i++)
        printf("%c",maxmark+i);
    printf("\n");
    return 0;
}
