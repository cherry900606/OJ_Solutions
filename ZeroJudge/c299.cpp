#include <iostream>
using namespace std;

int main()
{
    int n,m,min=1001,max=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>m;
        if(m<min) min=m;
        if(m>max) max=m;
    }
    cout<<min<<" "<<max<<" ";
    if((max-min)==(n-1)) cout<<"yes"<<endl;
    else cout<<"no"<<endl;
    return 0;
}
