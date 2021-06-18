#include <stdio.h>
#include <string.h>
int main()
{
    char index[]="`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./",c;
    while((c=getchar())!=EOF)
    {
        if(c==' ')
            printf(" ");
        else if(c=='\n')
            printf("\n");
        else
        {
            for(int i=0;i<strlen(index);i++)
            {
                if(c==index[i])
                    printf("%c",index[i-2]);
            }
        }
    }
    return 0;
}
