#include <stdio.h>

int main()
{
    char index[][4]={"½Þ","¹«","¤û","ªê","¨ß","Às","³D","°¨","¦Ï","µU","Âû","ª¯"};
    int n;
    while(~scanf("%d",&n))
    {
        printf("%s\n",index[(n<0 ? n+121 : n)%12]);
    }
    return 0;
}
