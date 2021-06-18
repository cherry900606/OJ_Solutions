#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int hh,mm,n;
        scanf("%d:%d",&hh,&mm);
        int  t=hh*60+mm;
        char str[10];
        while(1)
        {
            t++;
            if(t>=1440)
                t=0;
            hh=t/60,mm=t%60;
            sprintf(str,"%02d%02d",hh,mm);
            sscanf(str,"%d",&n);
            sprintf(str,"%d",n);
            int check=0;
            for(int i=0;str[i];i++)
            {
                if(str[i]!=str[strlen(str)-1-i])
                    check=1;
            }
            if(!check)
            {
                sprintf(str,"%02d:%02d",hh,mm);
                printf("%s\n",str);
                break;
            }
        }
    }
    return 0;
}
