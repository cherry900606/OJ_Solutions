#include <stdio.h>
#include <string.h>

int main()
{
    int sum,degree=1;
    char n[1000];
    while(scanf("%s",n,sizeof(n)))
    {
        if(n[0]=='0')
            break;
        degree=1;
        sum=0;
        for(int i=0;i<strlen(n);i++)
            sum+=n[i]-'0';
        while(sum>9)
        {
            int temp=0;
            while(sum>0)
            {
                temp+=sum%10;
                sum/=10;
                
            }
            sum=temp;
            degree++;
        }
        printf("%s",n);
        if(sum%9==0)
            printf(" is a multiple of 9 and has 9-degree %d.\n",degree);
        else
            printf(" is not a multiple of 9.\n");
    }
    return 0;
}
