#include <stdio.h>
#include <string.h>
int main()
{
    char n[1000],index[]="ABGDE#ZYHIKLMNXOPQRSTUFC$W3";
    while(scanf("%s",n))
    {
        int sum=0,s=0;
        if(n[0]=='.')
            break;
        for(int i=0;i<strlen(n);i++)
        {
            for(int j=0;j<strlen(index);j++)
            {
                if(n[i]==index[j])
                {
                    s=j;
                    break;
                }
            }
            if(0<=s&&s<=8)
                sum+=s+1;
            else if(9<=s&&s<=18)
                sum+=(s-8)*10;
            else
                sum+=(s-17)*100;
        }
        printf("%d\n",sum);
    }
    return 0;
}
