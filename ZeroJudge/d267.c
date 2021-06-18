/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <ctype.h>
int main()
{
    int n;
    scanf("%d",&n);
    getchar();
    while(n--)
    {
        char s[201];
        gets(s);
        int counter[26]={0},max=0;
        for(int i=0;s[i]!='\0';i++)
        {
            if(isalpha(s[i]))
            {
                if(isupper(s[i]))
                    counter[s[i]-'A']++;
                else
                    counter[s[i]-'a']++;
            }
        }
        for(int i=0;i<26;i++)
        {
            if(counter[i]>max)
                max=counter[i];
        }
        for(int i=0;i<26;i++)
        {
            if(counter[i]==max)
                printf("%c",i+'a');
        }
        printf("\n");
    }

    return 0;
}
