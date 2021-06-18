#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


int main()
{
    long long int pa,pb,pc;
    double pd;
    while(cin>>pa>>pb>>pc)
    {
        pd=sqrt(pa*pa+pc*pc-pb*pb);
        cout<<fixed<<setprecision(2)<<pd<<endl;
    }
    return 0;
}
