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
    int memory[8],temporary[4]={0},n;
    for(int i=0;i<8;i++)
        scanf("%d",&memory[i]);
    scanf("%d",&n);
    while(n--)
    {
        char command[8];
        int a,b,c;
        scanf("%s",command);
        if(strcmp(command,"LOAD")==0)
        {
            scanf("%d %d",&a,&b);
            temporary[a]=memory[b];
        }
        else if(strcmp(command,"ADD")==0)
        {
            scanf("%d %d %d",&a,&b,&c);
            temporary[a]=temporary[b]+temporary[c];
        }
        else if(strcmp(command,"STORE")==0)
        {
            scanf("%d %d",&a,&b);
            memory[a]=temporary[b];
        }
        else if(strcmp(command,"MOVE")==0)
        {
            scanf("%d %d",&a,&b);
            temporary[a]=temporary[b];
        }
    }
    printf("%d\n%d",temporary[0],memory[0]);
    return 0;
}
