#include <iostream>
#include <cmath>
using namespace std;
long long int find(long long int s)
{
    long long int n=sqrt(s);
    while(n*n+n<=s*2)
        n++;
    return n;
}
int main()
{
    int s;
    while(cin>>s)
    {
        if(s==0) break;
        long long int n=find(s);
        cout<<(n*n+n)/2-s<<" "<<n<<endl;
    }
    return 0;
}
