#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

#define PI 3.14159

int main()
{
    double n,m;
    while(cin>>n)
    {
        double a1=0,a2=0;
        while(n--)
        {
            cin>>m;
            a1+=(m/2)*(m/2)*PI;
        }
        cin>>n;
        while(n--)
        {
            cin>>m;
            a2+=(m/2)*(m/2)*PI;
        }
        cout<<fixed<<setprecision(2)<<fabs(a1-a2)<<'\n';
    }
    return 0;
}
