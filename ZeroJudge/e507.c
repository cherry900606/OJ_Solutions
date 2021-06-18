#include <stdio.h>
#include <string.h>
int main()
{
    char sentence[1000];
    while(scanf("%s",sentence)!=EOF)
    {
        int index1[26]={0},index2[26]={0};
        for(int i=0;i<strlen(sentence);i++)
            index1[sentence[i]-'a']++;
        scanf("%s",sentence);
        for(int i=0;i<strlen(sentence);i++)
            index2[sentence[i]-'a']++;
        for(int i=0;i<26;i++)
        {
            if(index1[i]>0&&index2[i]>0)
            {
                int n=index1[i];
                if(index2[i]<n)
                    n=index2[i];
                for(int j=0;j<n;j++)
                    printf("%c",'a'+i);
            }
        }
        printf("\n");
    }
    return 0;
}
