#include <stdio.h>

int main()
{
    char index[5]="UGYTI";
    int x;
    scanf("%d",&x);
    printf("%c\n",index[x%5]);
    return 0;
}
