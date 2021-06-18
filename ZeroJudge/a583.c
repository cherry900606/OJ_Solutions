#include <stdio.h>
#include <math.h>
double distant(int x1,int y1,int x2,int y2)
{
    return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}
int main()
{
    int n,m,i;
    while(scanf("%d %d",&n,&m)!=EOF)
    {
        int x[m],y[m];
        double d=0xffff,temp;
        for(i=0;i<m;i++)
        {
            scanf("%d %d",&x[i],&y[i]);
            for(int j=i-1;j>=0;j--)
            {
                temp=distant(x[i],y[i],x[j],y[j]);
                if(temp<d)
                    d=temp;
            }
        }
        
        printf("%.4lf\n",d);
    }
    return 0;
}
