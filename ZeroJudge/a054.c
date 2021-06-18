#include <stdio.h>

int main()
{
    int a[26]={1,0,9,8,7,6,5,4,9,3,2,2,1,0,8,9,8,7,6,5,4,3,1,3,2,0};
    char n[9];
    while(scanf("%s",n)!=EOF)
    {
        int sum=0,value;
        for(int i=0;i<8;i++)
            sum+=(n[i]-'0')*(8-i);
        sum+=(n[8]-'0');
        sum=(10-sum%10)%10;
        for(int i=0;i<26;i++)
        {
            if(a[i]==sum)
                printf("%c",i+'A');
        }
        printf("\n");
    }
    return 0;
}
