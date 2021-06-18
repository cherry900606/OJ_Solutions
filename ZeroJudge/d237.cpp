#include <iostream>
#include <cmath>
using namespace std;
int isPrime(int  x)
{
    for(int i=2;i<=sqrt(x);i++)
    {
        if(x%i==0)
            return 0;
    }
    return 1;
}
long long int find(int n)
{
    long long int sum=0;
    for(int i=2;i<=n;i++)
    {
        if(isPrime(i))
            sum+=i;
    }
    return sum;
}
int main()
{
    int n=2000000;
    cout<<find(n)<<endl;
    return 0;
}
