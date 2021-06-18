#include <stdio.h>

int main()
{
    int n,t,temp;
    scanf("%d %d",&n,&t);
    int digit[11]={0};
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<t;j++)
            scanf("%d",&temp),digit[j]+=temp;
    }
    printf("AND: ");
    for(int i=0;i<t;i++)
    {
        if(digit[i]==n) printf("1 ");
        else printf("0 ");
    }
    printf("\n");
    printf(" OR: ");
    for(int i=0;i<t;i++)
    {
        if(digit[i]==0) printf("0 ");
        else printf("1 ");
    }
    printf("\n");
    printf("XOR: ");
    for(int i=0;i<t;i++)
    {
        if(digit[i]%2) printf("1 ");
        else printf("0 ");
    }
    return 0;
}
