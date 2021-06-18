#include <stdio.h>

int main()
{
    int n,t=1;
    while(scanf("%d",&n)!=EOF)
    {
        int num[101],check=0,index[20001]={0};
        for(int i=0;i<n;i++)
            scanf("%d",&num[i]);
        for(int i=1;i<n;i++)
        {
            if(num[i]<=num[i-1])
                check=1;
        }
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                if(index[num[i]+num[j]]!=0)
                    check=1;
                index[num[i]+num[j]]++;
            }
        }
        printf("Case #%d: It is ",t++);
        if(check==1)
            printf("not ");
        printf("a B2-Sequence.\n\n");
            
    }
    return 0;
}
