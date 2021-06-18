#include <stdio.h>
#include <string.h>
int main()
{
    int t,n=1;
    scanf("%d",&t);
    while(t--)
    {
        int i=0,num=0;
        char s[100],alpha;
        scanf("%s",s);
        printf("Case %d: ",n++);
        while(i<=strlen(s)-1)
        {
            alpha=s[i];
            i++;
            while('0'<=s[i]&&s[i]<='9')
            {
                num=s[i]-'0'+num*10;
                i++;
            }
            for(int j=0;j<num;j++)
                printf("%c",alpha);
            num=0;
        }
        printf("\n");
    }
    return 0;
}
