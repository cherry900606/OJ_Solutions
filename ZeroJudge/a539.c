#include <stdio.h>

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int num[n];
        for(int i=0;i<n;i++)
            scanf("%d",&num[i]);
        int sum=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i-1;j>=0;j--)
            {
                if(num[j]>num[i])
                    sum++;
            }
        }
        printf("Minimum exchange operations : %d\n",sum);
    }
    return 0;
}
