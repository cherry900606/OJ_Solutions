#include <iostream>
#include <map>
using namespace std;

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    string s;
    map<string,int> mp;
    while(cin>>s)
    {
        if(mp[s]==0) cout<<0<<'\n';
        else cout<<1<<'\n';
        mp[s]++;
    }
    return 0;
}
