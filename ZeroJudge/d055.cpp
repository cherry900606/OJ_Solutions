#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        for(int i=0;i<n;i++)
        {
            double ax,ay,bx,by,cx,cy;
            cin>>ax>>ay>>bx>>by>>cx>>cy;
            double area=fabs(ax*by-ay*bx+bx*cy-by*cx+cx*ay-cy*ax)/14;
            area>=0?area:-1*area;
            cout<<(int)(area+0.5)<<endl;
        }
    }
    return 0;
}
