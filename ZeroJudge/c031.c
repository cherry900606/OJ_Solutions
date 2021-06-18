#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        double group=(sqrt(1+8*n)-1)/2;
        int g=group;
        if(group==g)
        {
            if(!(g%2))
                printf("TERM %d IS %.lf/%d\n",n,group,1);
            else
                printf("TERM %d IS 1/%.lf\n",n,group);
        }
        else
        {
            int num=n-(g+1)*g/2;
            if((g+1)%2)
                printf("TERM %d IS %d/%d\n",n,(g+2)-num,num);
            else
                printf("TERM %d IS %d/%d\n",n,num,(g+2)-num);
        }
            
    }
    return 0;
}
