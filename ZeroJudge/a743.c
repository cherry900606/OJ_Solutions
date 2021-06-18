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
    int n,len=0,amount[2001]={0};
    char country[2001][40]={'\0'},name[40]={'\0'},tmp[30]={'\0'};
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int check=0;
        scanf("%s",tmp);
        gets(name);
        for(int j=0;j<len;j++)
        {
            if(strcmp(tmp,country[j])==0)
            {
                amount[j]++;
                check=1;
                break;
            }
        }
        if(check==0)
        {
            strcpy(country[len],tmp);
            amount[len]++;
            len++;
        }
        
    }
    for(int i=0;i<len;i++)
    {
        for(int j=0;j<len;j++)
        {
            if(strcmp(country[i],country[j])<0)
            {
                char c[40];
                strcpy(c,country[i]);
                strcpy(country[i],country[j]);
                strcpy(country[j],c);
                int temp=amount[i];
                amount[i]=amount[j];
                amount[j]=temp;
            }
        }
    }
    for(int i=0;i<len;i++)
    {
        printf("%s %d\n",country[i],amount[i]);
    }
    return 0;
}
