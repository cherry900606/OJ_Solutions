#include <stdio.h>

int main()
{
    char index1[][4]={"��","��","��","��","��","�A","��","�B","��","�v"};
    char index2[][4]={"��","��","��","��","�l","��","�G","�f","��","�x","��","��"};
    int year;
    while(scanf("%d",&year)!=EOF)
    {
        printf("%s%s\n",index1[(year-1800)%10],index2[(year-1800)%12]);
    }
    return 0;
}
