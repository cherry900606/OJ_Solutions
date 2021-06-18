#include <stdio.h>

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int book[2001]={0};
        for(int i=0;i<n;i++)
        {
            int temp;
            scanf("%d",&temp);
            book[temp-1]++;
        }
        for(int i=0;;i++)
        {
            if(book[i]==0)
            {
                printf("%d\n",i+1);
                break;
            }
        }
    }
    return 0;
}
