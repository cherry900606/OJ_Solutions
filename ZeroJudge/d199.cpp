#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    long long int ABE,ECF,ADF;
    long long int AEF;
    while(cin>>ABE>>ECF>>ADF)
    {
        AEF=sqrt(pow(ABE+ECF+ADF,2)-4*ABE*ADF);
        cout<<fixed<<setprecision(3)<<AEF<<endl;
    }
    
    return 0;
}
