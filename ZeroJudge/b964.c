#include <stdio.h>
void insert_sort(int m[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i;j>0&&m[j-1]>m[j];j--)
        {
            int temp=m[j];
            m[j]=m[j-1];
            m[j-1]=temp;
        }
    }
}
int main()
{
    int m[20],n,bestcase,worstcase;
    while(scanf("%d",&n)!=EOF)
    {
        for(int i=0;i<n;i++)
            scanf("%d",&m[i]);
        bestcase=-1;
        worstcase=101;
        insert_sort(m,n);    
        for(int i=0;i<n;i++)
        {
            if(i!=n-1)
                printf("%d ",m[i]);
            else
                printf("%d",m[i]);
            if(m[i]>=60&&m[i]<worstcase) //最低的及格
            {
                worstcase=m[i];
            }
                
            if(m[i]<60&&m[i]>bestcase) //最高的不及格
            {
                bestcase=m[i];
            }
        }
        printf("\n");
        if(bestcase!=-1)
            printf("%d\n",bestcase);
        else
            printf("best case\n");
        if(worstcase!=101)
            printf("%d\n",worstcase);
        else
            printf("worst case\n");
    }
    return 0;
}
