#include <stdio.h>

int main()
{
    int t;
    long long int l[3];
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%lld %lld %lld",&l[0],&l[1],&l[2]);
        if(l[0]==0||l[1]==0||l[2]==0)
            printf("Case %d: Invalid\n",i);
        else if(l[0]<0||l[1]<0||l[2]<0)
            printf("Case %d: Invalid\n",i);
        else
        {
            for(int j=0;j<3;j++)
            {
                for(int k=0;k<3;k++)
                {
                    if(l[j]<l[k])
                    {
                        long long int temp=l[j];
                        l[j]=l[k];
                        l[k]=temp;
                    }
                }
            }
            if(l[0]==l[1]&&l[1]==l[2])
                printf("Case %d: Equilateral\n",i);
            else if(l[0]==l[1]||l[1]==l[2]||l[0]==l[3])
                printf("Case %d: Isosceles\n",i);
            else if(l[0]+l[1]>l[2])
                printf("Case %d: Scalene\n",i);
            else
                printf("Case %d: Invalid\n",i);
        }
    }
    return 0;
}
