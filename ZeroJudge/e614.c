#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int w[3];
        scanf("%d %d %d",&w[0],&w[1],&w[2]);
        if(w[0]+w[1]>w[2]&&w[1]+w[2]>w[0]&&w[2]+w[0]>w[1])
            printf("OK\n");
        else
            printf("Wrong!!\n");
    }
    return 0;
}
