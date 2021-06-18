#include <stdio.h>

int main()
{
    long int c[3];
    while(scanf("%ld %ld %ld",&c[0],&c[1],&c[2])!=EOF)
    {
        char p[3]="ABC";
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                if(c[i]<c[j])
                {
                    int temp=c[i];
                    c[i]=c[j];
                    c[j]=temp;
                    char tmp=p[i];
                    p[i]=p[j];
                    p[j]=tmp;
                }
            }
        }
        if((c[0]+c[1])<c[2])
            printf("%c\n",p[2]);
        else
            printf("%c\n",p[1]);
    }
    return 0;
}
