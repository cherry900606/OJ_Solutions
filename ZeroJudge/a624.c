#include <stdio.h>
#include <string.h>
int main()
{
    char code[31];
    while(scanf("%s",code)!=EOF)
    {
        int check=0,small=0,big=0,mark=0,num=0,cha=0;
        if(strlen(code)>=8)
            check=1;
        for(int i=0;i<strlen(code);i++)
        {
            if('a'<=code[i]&&code[i]<='z')
                small=1;
            else if('A'<=code[i]&&code[i]<='Z')
                big=1;
        }
        for(int i=0;i<strlen(code);i++)
        {
            if(('a'<=code[i]&&code[i]<='z')||('A'<=code[i]&&code[i]<='Z'))
                cha++;
            else
                num++;
        }
        if(cha*num==0)
            mark=0;
        else
            mark=1;
        check+=(small&&big)+mark;
        if(check==0)
            printf("This password is WEAK\n");
        else if(check==1)
            printf("This password is ACCEPTABLE\n");
        else if(check==2)
            printf("This password is GOOD\n");
        else if(check==3)
            printf("This password is STRONG\n");
    }
    return 0;
}
