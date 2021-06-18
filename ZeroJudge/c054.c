#include <stdio.h>
#include <string.h>
int main()
{
    char c,index[]="`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    while((c=getchar())!=EOF)
    {
        if(c=='\n')
            printf("\n");
        else if(c==' ')
            printf(" ");
        else
        {
            for(int i=0;i<strlen(index);i++)
            {
                if(c==index[i])
                    printf("%c",index[i-1]);
            }
        }
    }
    return 0;
}
