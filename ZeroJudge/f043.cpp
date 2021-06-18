#include <iostream>
using namespace std;

int main()
{
    int r,a;
    cin>>r>>a;
    if(r==a) a-=3;
    if(r-a>a) cout<<a<<"+"<<r-a<<"="<<r<<endl;
    else cout<<r-a<<"+"<<a<<"="<<r<<endl;
    return 0;
}
