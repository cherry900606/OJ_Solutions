#include <iostream>
#include <iomanip>
using namespace std;
void bangla(unsigned long long int n)
{
    if(n==0) return;
    
    if(n/10000000)
    {
        bangla(n/10000000);
        cout<<" kuti";
        n%=10000000;
    }
    if(n/100000)
    {
        bangla(n/100000);
        cout<<" lakh";
        n%=100000;
    }
    if(n/1000)
    {
        bangla(n/1000);
        cout<<" hajar";
        n%=1000;
    }
    if(n/100)
    {
        bangla(n/100);
        cout<<" shata";
        n%=100;
    }
    if(n) cout<<" "<<n;
}
int main()
{
    int times=1;
    unsigned long long int n;
    
    while(cin>>n)
    {
        cout<<setw(4)<<times++<<".";
        if(n==0) cout<<" 0";
        bangla(n);
        cout<<endl;
    }
    return 0;
}