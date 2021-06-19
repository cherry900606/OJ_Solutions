#include <iostream>
#include <string>
using namespace std;

int main()
{
    int l;
    while(cin>>l)
    {
        int parity=0;
        string binary;
        if(l==0) break;
        cout<<"The parity of ";
        while(l>0)
        {
            binary=(l%2==0?"0":"1")+binary;
            if(l%2) parity++;
            l/=2;
        }
        cout<<binary<<" is "<<parity<<" (mod 2)."<<endl;
    }
}