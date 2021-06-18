#include <stdio.h>
#include <string.h>
int gcd(int a,int b)
{
    while((a%=b)!=0&&(b%=a)!=0);
    return a+b;
}
int convert_to_int(char n[30])
{
    int num=0,t=1;
    for(int i=strlen(n)-1;i>=0;i--)
    {
        num+=(n[i]-'0')*t;
        t*=2;
    }
    return num;
}
int main()
{
    int n,t=1;
    scanf("%d",&n);
    while(n--)
    {
        char s1[30],s2[30];
        int num1,num2;
        scanf("%s",s1);
        scanf("%s",s2);
        printf("Pair #%d: ",t++);
        num1=convert_to_int(s1),num2=convert_to_int(s2);
        if(gcd(num1,num2)!=1)
            printf("All you need is love!\n");
        else
            printf("Love is not all you need!\n");
    }
    return 0;
}
