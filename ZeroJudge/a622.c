#include <stdio.h>
#include <string.h>
int main()
{
    char list[16][50];
    for(int i=0;i<16;i++)
    {
        for(int j=0;j<50;j++)
            list[i][j]='\0';
    }
    int l=0,max=0;
    while(gets(list[l]))
    {
        if(list[l][0]=='E'&&list[l][1]=='N'&&list[l][2]=='D')
            break;
        if(strlen(list[l])>max)
            max=strlen(list[l]);    
        l++;
        
    }

    for(int i=0;i<max;i++)
    {
        for(int j=0;j<l;j++)
        {
            if(list[j][i]=='\0')
                printf("   ");
            else
                printf("%c  ",list[j][i]);
        }
        printf("\n");
    }
    return 0;
}
