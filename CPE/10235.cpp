#include <iostream>
#include <cmath>
using namespace std;

int isPrime(int n)
{
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}

int main()
{
    int n;
    while(cin>>n)
    {
        int reverse=0,copy=n;
        while(copy>0)
        {
            reverse=reverse*10+copy%10;
            copy/=10;
        }
        if(isPrime(n)&&isPrime(reverse)&&n!=reverse)
            cout<<n<<" is emirp."<<endl;
        else if(isPrime(n))
            cout<<n<<" is prime."<<endl;
        else
            cout<<n<<" is not prime."<<endl;
    }
    return 0;
}