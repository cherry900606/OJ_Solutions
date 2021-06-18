#include <iostream>
#include <map>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    string s;
    cin>>n;
    getchar();
    getchar();
    while(n--)
    {
        map<string,int> mp;
        map<string,int>::iterator it;
        int total=0;
        while(getline(cin,s)&&s!="")
        {
            mp[s]++;
            total++;
        }
        for(it=mp.begin();it!=mp.end();it++)
        {
            cout<<it->first<<" "<<fixed<<setprecision(4)<<(double)it->second/total*100<<endl;
        }
        if(n!=0)
            cout<<endl;
    }
    return 0;
}
