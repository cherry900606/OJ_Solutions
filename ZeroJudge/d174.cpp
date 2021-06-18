#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

#define PI acos(-1.0)
int main()
{
    int D,V;
    while(cin>>D>>V)
    {
        if(D==0&&V==0) break;
        cout<<fixed<<setprecision(3)<<pow(pow(D,3)-6*V/PI,1.0/3.0)<<endl;
    }
    return 0;
}
