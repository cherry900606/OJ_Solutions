#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int c,m[100001],l;
    cin>>c;
    for(int i=0;i<c;i++)
       cin>>m[i];
    cin>>l;
    sort(m,m+c);
    if(m[1]+m[0]<2*l) cout<<"You are too black!";
    else cout<<l-m[0];
}
