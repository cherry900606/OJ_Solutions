#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,w,grade[1001],k,x,y;
        scanf("%d %d",&n,&w);
        for(int i=0;i<n;i++)
            scanf("%d",&grade[i]);
        while(w--)
        {
            scanf("%d",&k);
            if(k==1)
            {
                scanf("%d %d",&x,&y);
                int max=grade[x];
                for(int i=x;i<=y;i++)
                {
                    if(grade[i]>max)
                        max=grade[i];
                }
                printf("%d\n",max);
            }
            else if(k==2)
            {
                int sum=0;
                scanf("%d %d",&x,&y);
                for(int i=x;i<=y;i++)
                    sum+=grade[i];
                    printf("%d\n",sum/(y-x+1));
            }
            else
            {
                scanf("%d",&x);
                printf("%d\n",grade[x]);
            }
        }
    }
    return 0;
}
