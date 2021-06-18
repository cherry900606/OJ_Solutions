#include <stdio.h>

int main()
{
    int n,c=1;
    while(scanf("%d",&n)!=EOF)
    {
        int cool=0;
        while(n--)
        {
            char s[31];
            scanf("%s",s);
            int letter[26]={0},max=0,same=0,check=0,count=0;
            for(int i=0;s[i]!='\0';i++)
            {
                letter[s[i]-'a']++;
            }
            for(int i=0;i<26;i++)
            {
                if(letter[i]>max)
                    max=letter[i];
                if(letter[i]>0)
                    count++;
            }
            for(int i=max;i>0;i--)
            {
                same=0;
                for(int j=0;j<26;j++)
                {
                    if(letter[j]==i)
                        same++;
                }
                if(same>1)
                {
                    check=1;
                    break;
                }
            }
            if(check==0&&count>=2)
                cool++;
            
        }
        printf("Case %d: %d\n",c++,cool);
        
    }
    return 0;
}
