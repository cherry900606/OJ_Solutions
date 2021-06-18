#include <iostream>
using namespace std;

int main()
{
    int n,h1,m1,h2,m2,m3,t=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>h1>>m1>>h2>>m2>>m3;
        t=(60*h2+m2)-(60*h1+m1+m3);
        if(t>=0)
        {
            cout<<"Yes"<<endl;
        }
        if(t<0)
            cout<<"No"<<endl;
    }

return 0;




}
