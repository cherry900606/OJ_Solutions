#include <iostream>
using namespace std;

int gcd(int a,int b)
{
    while((a%=b)!=0&&(b%=a)!=0);
    return a+b;
}
int main()
{
    int n,t,_gcd,days=0;
    cin>>n>>t;
    if(t==0) cout<<days<<endl;
    else
    {
        _gcd=gcd(n,t);
        n/=_gcd,t/=_gcd;
        n=n+t;
        while(n>1)
        {
            days++;
            n/=2;
        }
        cout<<days<<endl;
    }
    
}
