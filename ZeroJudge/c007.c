/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
int main()
{
    int check=0;
    char s[300];
    while(gets(s)!=0)
    {
        for(int i=0;i<strlen(s);i++)
        {
            if(s[i]=='"')
            {
                if(check==0)
                {
                    printf("``");
                    check=1;
                }
                else
                {
                    printf("''");
                    check=0;
                }
            }
            else
                printf("%c",s[i]);
            }
        printf("\n");
    }
    return 0;
}
