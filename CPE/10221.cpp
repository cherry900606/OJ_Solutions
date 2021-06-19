#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

#define PI 2*acos(0)

int main()
{
    double s,a;
    string type;
    cout<<fixed<<setprecision(6);
    while(cin>>s>>a>>type)
    {
        if(a>180) a=360-a;
        if(type=="min") a/=60;
        cout<<2*PI*(s+6440)*(a/360.0)<<" "<<2*sin(a/2.0*PI/180)*(6440+s)<<endl;
    }
    return 0;
}