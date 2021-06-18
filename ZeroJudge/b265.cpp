#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    int n,tmp,index[5];
    while(cin>>n)
    {
        if(n==0) break;
        map<string,int> m;
        map<string,int>::iterator it;
        while(n--)
        {
            string temp;
            for(int i=0;i<5;i++)
                cin>>index[i];
            sort(index,index+5);
            for(int i=0;i<5;i++)
                temp+=to_string(index[i]);
            it=m.find(temp);
            if(it!=m.end()) (it->second)++;
            else m[temp]=1;
        }
        int max=0,ans=0;
        for(it=m.begin();it!=m.end();it++)
            if(it->second>max) max=it->second;
        for(it=m.begin();it!=m.end();it++)
            if(it->second==max) ans+=max;
        cout<<ans<<'\n';
    }
    
    return 0;
}
