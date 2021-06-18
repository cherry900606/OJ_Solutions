#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int l[3];
    cin>>l[0]>>l[1]>>l[2];
    sort(l,l+3);
    if(l[0]*l[0]+l[1]*l[1]==l[2]*l[2]) cout<<"right triangle"<<endl;
    else if(l[0]*l[0]+l[1]*l[1]<l[2]*l[2]) cout<<"obtuse triangle"<<endl;
    else cout<<"acute triangle"<<endl;
    return 0;
}
