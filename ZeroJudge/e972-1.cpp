#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n,m;
    char c;
    double sum=0;
    cin>>n>>m>>c;
    if(c=='U') sum=n/30.9;
    else if(c=='J') sum=n/0.28;
    else if(c=='E') sum=n/34.5;
    sum-=m;
    if(sum<0) cout<<"No Money";
    else if(sum>=0&&sum<0.05) cout<<c<<" 0.00";
    else cout<<fixed<<setprecision(2)<<c<<" "<<sum;
    return 0;
}
