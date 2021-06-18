#include <stdio.h>
#include <string.h>
int main()
{
    char c[80];
    while(1)
    {
        int space=0,p;
        gets(c);
        if(c[0]=='E'&&c[1]=='N'&&c[2]=='D'&&strlen(c)==3)
            break;
        for(int i=0;i<strlen(c);i++)
        {
            if(i==0)
                printf("%c",c[i]-'a'+'A');
            else if(c[i]==' ')
            {
                space=1;
                p=i;
            }
                
            else if(space==1)
            {
                printf("%c",c[i]-'a'+'A');
                space=0;
            }
        }
        printf(" ");
        for(int i=p+1;i<strlen(c);i++)
            printf("%c",c[i]);
        printf("\n");
    }
    return 0;
}
