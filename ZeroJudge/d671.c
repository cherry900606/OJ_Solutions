#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        char s[10000];
        gets(s);
        int l=strlen(s);
        if(sqrt(l)!=(int)sqrt(l))
            printf("INVALID\n");
        else
        {
            int k=0,size=(int)sqrt(l);
            char code[size][size];
            for(int i=0;i<size;i++)
            {
                for(int j=0;j<size;j++)
                    code[i][j]=s[k++];
            }
            for(int j=0;j<size;j++)
            {
                for(int i=0;i<size;i++)
                    printf("%c",code[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
