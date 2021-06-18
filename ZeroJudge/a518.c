#include <stdio.h>

int main()
{
    int a,b;
    while(1)
    {
        scanf("%d %d",&a,&b);
        if(a==-1&&b==-1)
            break;
        if(a>b)
        {
            int temp=a;
            a=b;
            b=temp;
        }
        if(b-a<=50)
            printf("%d\n",b-a);
        else
            printf("%d\n",100-(b-a));
    }
    return 0;
}
