#include <stdio.h>
#include <string.h>

int main()
{
    char s1[1000001],s2[1000001];
    while(gets(s1))
    {
        if(!strcmp(s1,"STOP!!")) break;
        gets(s2);
        int index1[127]={0};
        for(int i=0;s1[i];i++)
            index1[s1[i]]++;
        for(int i=0;s2[i];i++)
            index1[s2[i]]--;
        int i;
        for(i=33;i<127;i++)
        {
            if(index1[i]!=0)
                break;
        }
        puts(i==127?"yes":"no");
    }
    return 0;
}
