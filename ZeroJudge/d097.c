#include <stdio.h>

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int num[3000],index[3000]={0},check=0;
        for(int i=0;i<n;i++)
            scanf("%d",&num[i]);
        for(int i=1;i<n;i++)
        {
            int temp;
            if(num[i]>num[i-1])
                temp=num[i]-num[i-1];
            else
                temp=num[i-1]-num[i];
            index[temp]++;
        }
        for(int i=1;i<n;i++)
        {
            if(index[i]==0)
            {
                check=1;
                break;
            }
        }
        if(check==0)
            printf("Jolly\n");
        else
            printf("Not jolly\n");
    }

    return 0;
}
