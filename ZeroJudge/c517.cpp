#include <iostream>
using namespace std;

int main()
{
    long long int px,py,x1,y1,x2,y2,d=0;
    cin>>px>>py>>x1>>y1>>x2>>y2;
    if(px>x2) d+=px-x2;
    else if(px<x1) d+=x1-px;
    if(py>y2) d+=py-y2;
    else if(py<y1) d+=y1-py;
    cout<<d<<endl;
    return 0;
}
