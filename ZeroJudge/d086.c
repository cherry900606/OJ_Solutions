#include <stdio.h>
#include <string.h> 

int main() 
{
    int i,len,sum,check,A,a,Z,z;
    char s[201];
    
    A = 'A' - 1;
    Z = 'Z' + 1;
    a = 'a' - 1;
    z = 'z' + 1;
    
    while(scanf("%s",s)==1)
    {
        if(s[0] == '0' && s[1]=='\0')
            break;
        len = strlen(s);
        sum = 0;
        check = 0;
        for(i=0;i<len;i++)
        {
            if(A<s[i] && s[i]<Z)
                sum = sum + s[i] - 'A' + 1;
            else if(a<s[i] && s[i]<z)
                sum = sum + s[i] - 'a' + 1;
            else
            {
                check = 1;
                break;
            }
        }
        if(check)
            printf("Fail\n");
        else
            printf("%d\n",sum);
    }
    return 0;
}
