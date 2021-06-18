#include <stdio.h>
#include <string.h>
int main()
{
    char s[10000];
    while(gets(s)!=0)
    {
        long int sum=0,tmp=0;
        for(int i=0;i<strlen(s);i++)
        {
            if('0'<=s[i]&&s[i]<='9')
                tmp = tmp*10+s[i]-'0';
            else if(s[i]==' ')
            {
                sum+=tmp;
                tmp=0;
            }
        }
        sum+=tmp;
        printf("%ld\n",sum);
    }
    return 0;
}
