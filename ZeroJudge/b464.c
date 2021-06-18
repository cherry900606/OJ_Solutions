#include <stdio.h>
#include <math.h>
int main()
{
    int r,n;
    scanf("%d %d",&r,&n);
    int s=round((double)n/r);
    printf("%d:%02d\n",s/60,s%60);
    return 0;
}
