#include <stdio.h>
int check(int n)
{
    while(n>0)
    {
        int temp=n%10;
        if(temp==4)
            return 0;
        n/=10;
    }
    return 1;
}
int main()
{
    int index1[10002],index2[18000],n=1,i=1;
    while(i<=10000)
    {
        if(check(n))
            index1[i]=n,index2[n]=i,i++;
        n++;
    }
    char k;
    
    while(scanf("%c %d",&k,&n)!=EOF)
    {
        if(k=='T')
            printf("%d\n",index1[n]);
        else if(k=='F')
            printf("%d\n",index2[n]);
    }
    return 0;
}
