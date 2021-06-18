#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    while(scanf("%d",&n))
    {
        char num[1000]={'\0'};
        int ans=0,i=0;
        if(n==0)
            break;
        printf("The parity of ");
        while(n>0)
        {
            if(n%2)
                ans++;
            num[i++]=n%2+'0';
            n/=2;
        }
        for(int j=i-1;j>=0;j--)
            printf("%c",num[j]);
        printf(" is %d (mod 2).\n",ans);
    }
    return 0;
}
