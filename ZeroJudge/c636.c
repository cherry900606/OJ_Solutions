#include <stdio.h>

int main()
{
    char index[][4]={"��","��","��","��","��","�s","�D","��","��","�U","��","��"};
    int n;
    while(~scanf("%d",&n))
    {
        printf("%s\n",index[(n<0 ? n+121 : n)%12]);
    }
    return 0;
}
