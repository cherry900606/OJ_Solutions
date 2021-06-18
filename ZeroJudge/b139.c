#include <stdio.h>

int main()
{
    int l,m;
    while(scanf("%d %d",&l,&m)!=EOF)
    {
        int tree[10001]={0},sum=0;
        while(m--)
        {
            int a,b;
            scanf("%d %d",&a,&b);
            for(int i=a;i<=b;i++)
                tree[i]=1;
        }
        for(int i=0;i<l+1;i++)
        {
            if(tree[i])
                sum++;
        }
        printf("%d\n",l-sum+1);
    }
    return 0;
}
