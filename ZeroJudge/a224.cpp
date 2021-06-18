#include <iostream>
#include <map>
using namespace std;

int main()
{
    string s;
    while(cin>>s)
    {
        map<char,int> mp;
        map<char,int>::iterator it;
        int odd_count=0;
        for(int i=0;i<s.size();i++)
        {
            if(isalpha(s[i]))
            {
                s[i]=tolower(s[i]);
                mp[s[i]]++;
            }
        }
        for(it=mp.begin();it!=mp.end();it++)
        {
            if(it->second%2) odd_count++;
        }
        if(odd_count>1) cout<<"no..."<<endl;
        else cout<<"yes !"<<endl;
    }
    return 0;
}
