#include <math.h>
#include <stdio.h>
#define size 830
int sieve[size]={0};
int primetable[200],pnum=0;
void sieve_prime()
{
    sieve[0]=sieve[1]=1;
    for(int i=2;i<size;i++)
    {
        if(!sieve[i])
        {
            for(int j=i*i;j<size;j+=i)
                sieve[j]=1;
            primetable[pnum++]=i;
        }
    }
}
int main()
{
    sieve_prime();
    int n,i;
    while(scanf("%d",&n)!=EOF)
    {
        if(n<size)
            !sieve[n] ? puts("It's a prime!!!") : puts("It's not a prime!!!");
        else
        {
            for(i=0;i<pnum;i++)
            {
                if(!(n%primetable[i]))
                    break;
            }
            i==pnum ? puts("It's a prime!!!") : puts("It's not a prime!!!");
        }
    }

    return 0;
}
