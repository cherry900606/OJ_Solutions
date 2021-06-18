#include <iostream>
using namespace std;

int main()
{
    int n,k,w,sum=0;
    cin>>n>>k>>w;
    sum+=n;
    while(n>=k)
    {
        sum+=(n/k)*w;
        n=n-n/k*k+n/k*w;
    }
    cout<<sum;
    return 0;
}
