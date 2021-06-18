#include <stdio.h>

int main()
{
    int n;
    char c[8];
    scanf("%d",&n);
    while(n--)
    {
        int one=0,two=0,base=1;
        scanf("%s",c);
        for(int i=2;i>=0;i--)
        {
            one+=base*(c[i]-'A');
            base*=26;
        }
        for(int i=4;i<8;i++)
        {
            two=c[i]-'0'+two*10;
        }
        if(two>one)
        {
            if(two-one<=100)
                printf("nice\n");
            else
                printf("not nice\n");
        }
        else
        {
            if(one-two<=100)
                printf("nice\n");
            else
                printf("not nice\n");
        }
    }
    return 0;
}
