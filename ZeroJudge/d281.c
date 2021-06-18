/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    long long int n;
    while(scanf("%lld",&n)&&n>0)
    {
        if(n==1)
            printf("0%%\n");
        else
            printf("%lld%%\n",n*25);
    }
    return 0;
}
