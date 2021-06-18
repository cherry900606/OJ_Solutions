#include <stdio.h>
#define SIZE 10000

int main()
{
    int prime[SIZE];
    for(int i=2;i<SIZE;i++)
    {
        if(!prime[i])
        {
            for(int j=i*i;j<SIZE;j+=i)
                prime[j]=1;
        }
    }
    int id;
    scanf("%d",&id);
    if(!prime[id])
        puts("yes");
    else
        puts("no");
    return 0;
}
