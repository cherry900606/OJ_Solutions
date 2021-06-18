#include <stdio.h>

int main()
{
    int n;
    while(scanf("%d",&n))
    {
        int top=1,north=2,west=3,temp;
        char command[6];
        if(n==0)
            break;
        for(int i=0;i<n;i++)
        {
            scanf("%s",command);
            if(command[0]=='n')
                temp=7-north,north=top,top=temp;
            else if(command[0]=='w')
                temp=7-west,west=top,top=temp;
            else if(command[0]=='s')
                temp=north,north=7-top,top=temp;
            else
                temp=west,west=7-top,top=temp;
        }
        printf("%d\n",top);
    }
    return 0;
}
