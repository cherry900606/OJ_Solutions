#include<stdio.h>

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int s=0;
        for(int i=1;i<n;i++)
        {
            if(n%i==0)
                s+=i;
        }
        if(s>n)
            printf("�ռ�\n");
        else if(s<n)
            printf("����\n");
        else
            printf("������\n");
    }
    return 0;
}
