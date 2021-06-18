#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d",&n);
    getchar();
    for(int t=1;t<=n;t++)
    {
        char s1[21],s2[21];
        gets(s1);
        gets(s2);
        int len1=strlen(s1),len2=strlen(s2),i=0,j=0;
        printf("Case %d: ",t);
        if(strcmp(s1,s2)==0) printf("Yes\n");
        else
        {
            while(i<len1&&j<len2)
            {
                if(s1[i]==' ')
                {
                    i++;
                    continue;
                }
                else if(s2[j]==' ')
                {
                    j++;
                    continue;
                }
                
                else if(s1[i]!=s2[j]) break;
                i++,j++;
            }
            if(i!=len1||j!=len2) printf("Wrong Answer\n");
        }
        if(i==len1&&j==len2)
            printf("Output Format Error\n");
    }

    return 0;
}
