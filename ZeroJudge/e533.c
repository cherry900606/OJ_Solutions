/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,p[10];
    scanf("%d",&n);
    printf("Lumberjacks:\n");
    while(n--)
    {
        for(int i=0;i<10;i++)
            scanf("%d",&p[i]);
        int check=0;
        if(p[0]<p[1])
        {
            for(int i=1;i<10;i++)
            {
                if(p[i]<p[i-1])
                {
                    printf("Unordered\n");
                    check=1;
                    break;
                }
            }
        }
        else
        {
            for(int i=1;i<10;i++)
            {
                if(p[i]>p[i-1])
                {
                    printf("Unordered\n");
                    check=1;
                    break;
                }
            }
        }
        if(!check)
            printf("Ordered\n");
    }
    return 0;
}
