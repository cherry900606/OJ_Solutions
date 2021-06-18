/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    getchar();
    while(n--)
    {
        char c;
        int n1,n2,sum;
        scanf("%x %c %x",&n1,&c,&n2);
        if(c=='+')
            sum=n1+n2;
        else
            sum=n1-n2;
        char n[13]={'\0'};
        for(int i=12;i>=0;i--)
        {
            if(n1==0)
                n[i]='0';
            else if(n1%2)
                n[i]='1';
            else
                n[i]='0';
            n1/=2;
        }
        printf("%s %c ",n,c);
        for(int i=12;i>=0;i--)
        {
            if(n2==0)
                n[i]='0';
            else if(n2%2)
                n[i]='1';
            else
                n[i]='0';
            n2/=2;
        }
        printf("%s = %d\n",n,sum);
    }
    return 0;
}
