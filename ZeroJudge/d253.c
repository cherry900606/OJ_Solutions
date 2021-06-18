#include <stdio.h>
#define N 7500
int s[N+1]={0},C[5]={1,5,10,25,50};
int main()
{
    int n;
    s[0]=1;
    for(int i=0;i<5;i++)
    {
        for(int j=C[i];j<=N;j++)
            s[j]+=s[j-C[i]];
    }
    while(scanf("%d",&n)!=EOF)
        printf("%d\n",s[n]);
    return 0;
}
