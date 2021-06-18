#include <iostream>
#include <map>
using namespace std;

bool isPrime(int n)
{
    if(n==1) return false;
    for(int i=2;i<=n/2;i++)
        if(n%i==0) return false;
    return true;
}
int main()
{
    string  s;
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int empty=1;
        cin>>s;
        cout<<"Case "<<i<<": ";
        map<char,int> mp;
        map<char,int>::iterator it;
        for(int j=0;j<s.size();j++)
            mp[s[j]]++;
        for(it=mp.begin();it!=mp.end();it++)
        {
            if(isPrime(it->second)) 
            {
                cout<<it->first;
                empty=0;
            }
        }
        if(empty) cout<<"empty";
        cout<<endl;
    }
    return 0;
}
