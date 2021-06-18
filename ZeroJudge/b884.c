#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int x,y,yee;
        scanf("%d %d",&x,&y);
        yee=100-(x+y);
        if(0<yee&&yee<=30)
            printf("sad!\n");
        else if(30<yee&&yee<=60)
            printf("hmm~~\n");
        else if(60<yee&&yee<100)
            printf("Happyyummy\n");
        else
            printf("evil!!\n");
    }
    return 0;
}
