#include <stdio.h>

int main()
{
    int n,a[100],b[100],now=1;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i]<a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    int len=n;
    b[0]=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]==a[i-1])
            len--;
        else
        {
            b[now]=a[i];
            now++;
        }
    }
    printf("%d\n",len);
    for(int i=0;i<len;i++)
        printf("%d ",b[i]);
    return 0;
}
