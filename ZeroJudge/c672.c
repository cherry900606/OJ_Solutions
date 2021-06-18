#include <stdio.h>

int main()
{
    char s[12];
    while(gets(s)!=0)
    {
        if(s[0]=='#')
        {
            int r,g,b;
            sscanf(s,"#%02x%02x%02x",&r,&g,&b);
            printf("%d %d %d\n",r,g,b);
        }
        else
        {
            int r,g,b;
            sscanf(s,"%d %d %d",&r,&g,&b);
            printf("#%02X%02X%02X\n",r,g,b);
        }
    }
    return 0;
}
