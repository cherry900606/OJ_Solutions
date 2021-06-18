#include <iostream>
using namespace std;


int main()
{
    int a,b,c,d;
    while(cin>>a>>b>>c>>d)
    {
        int ans=0,space=0;
        ans+=d;
        ans+=c;
        space+=37*c;
        ans+=(b%8==0?b/8:b/8+1);
        space+=64-8*(b%8);
        if(a>space) ans++;
        cout<<ans<<endl;
    }
    return 0;
}
