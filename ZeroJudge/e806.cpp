#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n,p,tmp,flag=0;
    map<int,int> mp;
    map<int,int>::reverse_iterator it;
    for(int i=0;i<2;i++)
    {
        cin>>n;
        for(int j=0;j<n;j++)
        {
            cin>>p>>tmp;
            mp[p]+=tmp;
        }
    }
    for(it=mp.rbegin();it!=mp.rend();it++)
    {
        if(it->second!=0)
        {
            cout<<it->first<<":"<<it->second<<endl;
            flag=1;
        }
    }
    if(!flag) cout<<"NULL!"<<endl;        
    return 0;
}
