#include <stdio.h>
#include <string.h>
int main()
{
    int a=0,b=0;
    char x[1000];
    gets(x);
    for(int i=0;i<strlen(x);i++)
    {
        if(i%2==1)
            a+=x[i]-'0';
        else
            b+=x[i]-'0';
    }
    if(a>b)
        printf("%d\n",a-b);
    else
        printf("%d\n",b-a);
    return 0;
}
