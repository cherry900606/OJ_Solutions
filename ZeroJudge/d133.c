#include <stdio.h>
#define N 30000
long long int s[N+1]={0},C[5]={1,5,10,25,50};
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
    {
        if(s[n]>1)
            printf("There are %lld ways to produce %d cents change.\n",s[n],n);
        else
            printf("There is only 1 way to produce %d cents change.\n",n);
    }
        
    return 0;
}
