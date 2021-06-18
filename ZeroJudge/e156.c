#include <stdio.h>
int sum=0,n;
int f()
{
    return (sum+=n)&&n--&&f(); 
}
int main()
{
    scanf("%d",&n);
    f();
    printf("%d\n",sum);
    return 0;
}
