#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    string s,copy;
    while(cin>>s)
    {
        int max=0,n=0;
        copy=s;
        sort(s.begin(),s.end());
        max=pow(s[s.size()-1]-'0',2)+pow(s[s.size()-2]-'0',2);
        for(int i=3;i>=1;i--)
            n=copy[copy.size()-i]-'0'+n*10;
        if(max==n) cout<<"Good Morning!"<<endl;
        else cout<<"SPY!"<<endl;
    }
    
    
    return 0;
}
