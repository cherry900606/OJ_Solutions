#include <stdio.h>

#include <string.h>



int main()

{

    char s[300];

    while(gets(s)!=0)

    {

        int word=0;

        for(int i=0;i<strlen(s);i++)

        {

            if(isalpha(s[i])!=0&&isalpha(s[i-1])==0)

                word++;

        }

        printf("%d\n",word);

    }

    return 0;

}
