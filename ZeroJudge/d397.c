#include <stdio.h>
#define N 30000
long long int s[N+1]={0};
int C[11]={5,10,20,50,100,200,500,1000,2000,5000,10000};
int main()
{
    double n;
    s[0]=1;
    for(int i=0;i<11;i++)
    {
        for(int j=C[i];j<=N;j++)
            s[j]+=s[j-C[i]];
    }
    while(scanf("%lf",&n)&&n)
    {
        n+=1e-6;
        printf("%6.2lf",n);
        printf("%17lld\n",s[(int)(n*100)]);
    }
        
    return 0;
}
