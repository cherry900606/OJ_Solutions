#include <stdio.h>

int main()
{
    int n,rank[5]={0},num=0;
    float ave=0;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)
            break;
        rank[n-1]++;
        num++;
    }
    for(int i=5;i>=1;i--)
    {
        printf("%d (%2d) |",i,rank[i-1]);
        for(int j=0;j<rank[i-1];j++)
            printf("=");
        printf("\n");
        ave+=i*rank[i-1];
    }
    ave/=num;
    printf("Average rating: %.4f\n",ave);
    return 0;
}
