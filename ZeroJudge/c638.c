#include <stdio.h>

int main()
{
    char index1[][4]={"©°","¨¯","¤Ð","¬Ñ","¥Ò","¤A","¤þ","¤B","¥³","¤v"};
    char index2[][4]={"¥Ó","¨»","¦¦","¥è","¤l","¤¡","±G","¥f","¨°","¤x","¤È","¥¼"};
    int year;
    while(scanf("%d",&year)!=EOF)
    {
        printf("%s%s\n",index1[(year-1800)%10],index2[(year-1800)%12]);
    }
    return 0;
}
