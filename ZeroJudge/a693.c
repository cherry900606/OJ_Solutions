#include <stdio.h>

int main()
{
   int n,m;
   while(scanf("%d %d",&n,&m)!=EOF)
   {
        int a[n];
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(int i=0;i<m;i++)
        {
            int l,r,ans=0;
            scanf("%d %d",&l,&r);
            for(int j=l-1;j<r;j++)
                ans+=a[j];
            printf("%d\n",ans);
        }
   }
    return 0;
}
