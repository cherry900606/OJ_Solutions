#include <stdio.h>
int find(int n)
{
    if(n==1)
        return 1;
    else if(n%2==0)
        return find(n/2)+1;
    else
        return find(3*n+1)+1;
}
int main()
{
    int a,b;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        printf("%d %d ",a,b);
        if(a>b)
        {
            int temp=a;
            a=b;
            b=temp;
        }
        int ans=0;
        for(int i=a;i<=b;i++)
        {
            int temp=find(i);
            if(ans<temp)
                ans=temp;
        }
        printf("%d\n",ans);
    }
    return 0;
}
