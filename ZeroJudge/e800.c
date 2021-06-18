#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    char s[50][16];
    float e[50],p,l,w,r;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%s %f %f %f %f",s[i],&p,&l,&w,&r);
        e[i]=p*w/l*r;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(e[i]>e[j])
            {
                float temp=e[i];
                e[i]=e[j];
                e[j]=temp;
                char tmp[16];
                strcpy(tmp,s[i]);
                strcpy(s[i],s[j]);
                strcpy(s[j],tmp);
            }
        }
    }
    for(int i=0;i<n;i++)
        printf("%s\n",s[i]);
    return 0;
}
