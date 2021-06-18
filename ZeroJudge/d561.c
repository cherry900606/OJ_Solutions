#include <stdio.h>

int main()
{
    char n[101]={'\0'};
    while(scanf("%s",n)!=EOF)
    {
        int check=0,i=0;
        if(n[0]=='-')
        {
            check=1;
            i++;
        }
        if(n[i]=='1')
        {
            if(check)
                printf("-1.00\n");
            else
                printf("1.00\n");
        }
        else
        {
            int f=0;i+=2;
            if(n[i]!='\0')
                f=n[i]-'0';
            if(n[i+1]!='\0')
                f=n[i+1]-'0'+f*10;
            else
                f*=10;
            if(n[i+2]!='\0')
            {
                if(n[i+2]-'0'>=5)
                f++;
            }
            float ans=f*0.01;
            if(check&&!ans)
                printf("0.00\n");
            else
            {
                if(check)
                    printf("-");
                printf("%.2f\n",ans);
            }
        }
    }
    return 0;
}
