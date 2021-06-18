#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    int alpha=0,number=0,score=0,n=0;
    char password[21];
    scanf("%s",password);
    for(int i=0;password[i];i++)
    {
        if(isalpha(password[i]))
            alpha++;
        else
            number++;
    }
    if(strlen(password)<8||alpha==0||number==0)
        score-=5;
    else
        score+=10;
    score+=strlen(password)*3+alpha*3+number*2;
    if(alpha==0)
        score-=strlen(password);
    if(number==0)
        score-=strlen(password);
    for(int i=1;password[i];i++)
    {
        if(isdigit(password[i])&&isdigit(password[i-1]))
            n++;
    }
    score-=n*2;
    printf("%d",score);
    return 0;
}
