#include <iostream>
using namespace std;

int main()
{
    double h,m,s;
    while(cin>>h>>m>>s)
    {
        cout<<(int)h<<" "<<(int)m<<" "<<(int)s<<". ";
        if(h>=(m/s)) cout<<"I will make it!"<<endl;
        else cout<<"I will be late!"<<endl;
    }
    return 0;
}
