#include <stdio.h>
#include <string.h>
int main()
{
    char sentence[100];
    int n,index[26]={0},max=0;
    scanf("%d",&n);
    n++;
    while(n--)
    {
        gets(sentence);
        for(int i=0;i<strlen(sentence);i++)
        {
            if('a'<=sentence[i]&&sentence[i]<='z')
                index[sentence[i]-'a']++;
            else if('A'<=sentence[i]&&sentence[i]<='Z')
                index[sentence[i]-'A']++;
        }
        for(int i=0;i<26;i++)
        {
            if(index[i]>max)
                max=index[i];
        }
    }
    for(int i=max;i>=1;i--)
    {
        for(int j=0;j<26;j++)
        {
            if(index[j]==i)
                printf("%c %d\n",'A'+j,index[j]);
        }
    }
    return 0;
}
