#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    char word[7];
    scanf("%d",&n);
    while(n--)
    {
        int one=0,two=0;
        scanf("%s",word);
        if(strlen(word)==5)
            printf("3\n");
        else
        {
            if(word[0]=='o')
                one++;
            if(word[1]=='n')
                one++;
            if(word[2]=='e')
                one++;
            if(word[0]=='t')
                two++;
            if(word[1]=='w')
                two++;
            if(word[2]=='o')
                two++;
            if(one>=2)
                printf("1\n");
            else
                printf("2\n");
        }
    }
    return 0;
}
