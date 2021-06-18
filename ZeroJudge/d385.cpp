#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(int a,int b)
{
    string x=to_string(a),y=to_string(b);
    return (x+y)>(y+x);
}
int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0) break;
        int l[51];
        for(int i=0;i<n;i++)
            cin>>l[i];
        sort(l,l+n,cmp);
        for(int i=0;i<n;i++)
            cout<<l[i];
        cout<<endl;
    }
    return 0;
}
