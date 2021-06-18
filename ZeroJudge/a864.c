#include <stdio.h>

int main()
{
    float mb,mv,value;
    char str[50],star[20];
    while(gets(str)!=0)
    {
        if(str[0]=='E'&&str[1]=='N'&&str[2]=='D')
            break;
        sscanf(str,"%s %f %f",star,&mb,&mv);
        value=mb-mv;
        printf("%s %.2f ",star,value);
        if(1.5<=value&&value<=2)
            printf("M\n");
        else if(1<=value&&value<=1.499)
            printf("K\n");
        else if(0.5<=value&&value<=0.999)
            printf("G\n");
        else if(0.25<=value&&value<=0.499)
            printf("F\n");
        else if(0<=value&&value<=0.299)
            printf("A\n");
        else if(-0.25<=value&&value<=-0.001)
            printf("B\n");
        else if(-0.35<=value&&value<=-0.251)
            printf("O\n");
    }
    return 0;
}
