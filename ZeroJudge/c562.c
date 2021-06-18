#include <stdio.h>
#include <string.h>
int main()
{
    char n[11];
    while(scanf("%s",n)!=EOF)
    {
        int ans=0;
        for(int i=0;i<strlen(n);i++)
        {
            if(n[i]=='8')
                ans+=2;
            else if(n[i]=='0'||n[i]=='6'||n[i]=='9')
                ans++;
        }
        printf("%d\n",ans);
    }
    return 0;
}
