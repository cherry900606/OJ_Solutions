#include <stdio.h>

int main()
{
    char s[201];
    while(scanf("%s",s)&&s[0]!='*')
    {
        int t=0;
        float temp=0;
        for(int i=1;s[i]!='\0';i++)
        {
            if(s[i]=='W')
                temp+=1;
            else if(s[i]=='H')
                temp+=1/2.;
            else if(s[i]=='Q')
                temp+=1/4.;
            else if(s[i]=='E')
                temp+=0.125;
            else if(s[i]=='S')
                temp+=1/16.;
            else if(s[i]=='T')
                temp+=1/32.;
            else if(s[i]=='X')
                temp+=1/64.;
            else if(s[i]=='/')
            {
                if(temp==1)
                    t++;
                temp=0;
            }
        }
        printf("%d\n",t);
    }
    return 0;
}
