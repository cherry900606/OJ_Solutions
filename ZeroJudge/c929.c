#include <stdio.h>
#include <string.h>
int main()
{
    char s[30],list[2000];
    gets(s);
    gets(list);
    for(int i=0;i<strlen(list);i++)
    {
        if(s[0]==list[i])
        {
            int check=0;
            for(int j=0;j<strlen(s);j++)
            {
                if(s[j]!=list[i+j])
                {
                    check=1;
                    break;
                }
            }
            if(check==0)
            {
                printf("\n");
                i+=strlen(s)-1;
            }
            else
                printf("%c",list[i]);
        }
        else
            printf("%c",list[i]);
    }
    return 0;
}
