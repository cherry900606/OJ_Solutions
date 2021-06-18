#include<stdio.h>
#include<string.h>
int t,n,i,c;
int list[128];
char s[200];
char out[200];
void P(int len);
int main()
{
    scanf("%d",&t);
    while(~scanf("%s",s))
    {
    memset(list,0,sizeof(list));
    memset(out,0,sizeof(out));
    for(n=0;s[n]!='\0'&&s[n]!='\n'&&s[n]!='\r';n++);
    for(i=0;i<n;i++)
        list[s[i]]++;
    P(0);
    printf("\n");
    memset(s,0,sizeof(s));
    }
    memset(list,0,sizeof(list));
    memset(out,0,sizeof(out));
    for(i=0;i<9;i++)// ABCDEFGHI<----(測資少的部分)
        s[i] = 'A'+i;
    for(n=0;s[n]!='\0'&&s[n]!='\n'&&s[n]!='\r';n++);
    for(i=0;i<n;i++)
        list[s[i]]++;
    P(0);
    printf("\n");
    memset(s,0,sizeof(s));
    return 0;
}
void P(int len)
{
    if(len==n)
    {
        puts(out);
        return;
    }
    int i;
    for(i=1;i<128;i++)
    {
        if(list[i])
        {
            out[len] = i;
            list[i]--;
            P(len+1);
            list[i]++;
        }
    }
    return;
}
