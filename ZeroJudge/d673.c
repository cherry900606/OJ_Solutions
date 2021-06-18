/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int s,test[12],temp,t=1;
    while(1)
    {
        scanf("%d",&s);
        if(s<0)
            break;
        for(int i=0;i<12;i++)
            scanf("%d",&test[i]);
        printf("Case %d:\n",t++);
        for(int i=0;i<12;i++)
        {
            scanf("%d",&temp);
            if(s>=temp)
            {
                printf("No problem! :D\n");
                s-=temp;
            }
                
            else
                printf("No problem. :(\n");
            s+=test[i];
        }
    }
    

    return 0;
}
