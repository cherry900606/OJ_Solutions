#include <stdio.h>
#include <string.h>
int main()
{
    char num[1001];
    while(scanf("%s",num))
    {
        int a=0,b=0;
        if(num[0]=='0')
            break;
        for(int i=0;i<strlen(num);i++)
        {
            if(i%2)
                a+=num[i]-'0';
            else
                b+=num[i]-'0';
        }
        if(a<b)
        {   
            int tmp=a;
            a=b;
            b=tmp;
        }
        if((a-b)%11==0)
            printf("%s is a multiple of 11.\n",num);
        else
            printf("%s is not a multiple of 11.\n",num);
    }
    return 0;
}
