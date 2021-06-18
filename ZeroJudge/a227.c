#include <stdio.h>
void hanoi(int n,char a,char b,char c)
{
    if(n==1)
        printf("Move ring %d from %c to %c\n",n,a,c);
    else
    {
        hanoi(n-1,a,c,b);
        printf("Move ring %d from %c to %c\n",n,a,c);
        hanoi(n-1,b,a,c);
    }
}
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        hanoi(n,'A','B','C');
    }
    return 0;
}
