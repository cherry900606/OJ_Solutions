#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char n[5000];
        scanf("%s",n);
        if(strlen(n)==1&&n[0]=='0')
            printf("1\n");
        else if(strlen(n)==1&&n[0]=='1')
            printf("66\n");
        else
        {
            int t=(n[strlen(n)-1]-'0')%5;
            if(t==0)
                puts("76");
            else if(t==1)
                puts("16");
            else if(t==2)
                puts("56");
            else if(t==3)
                puts("96");
            else
                puts("36");
            
        }
    }
    return 0;
}
