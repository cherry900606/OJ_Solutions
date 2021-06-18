#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        int mycount=0,check=0,c;
        if(n==0)
            break;

        c=pow(n,0.5);
        if(c*c==n)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;

    }
    return 0;
}
