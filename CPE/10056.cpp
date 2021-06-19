#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double s,n,p,k,q;
    cin>>s;
    cout<<fixed<<setprecision(4);
    while(s--)
    {
        double r,a0;
        cin>>n>>p>>k;
        q=1-p;
        if(pow(q,n)==1) 
            cout<<"0.0000"<<endl;
        else
            cout<<p*pow(q,k-1)/(1-pow(q,n))<<endl;
    }
    return 0;
}