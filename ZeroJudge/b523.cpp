#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    string s;
    vector<string> l;
    while(getline(cin,s))
    {
        int i;
        for(i=0;i<l.size();i++)
        {
            if(l[i]==s) break;
        }
        if(i==l.size())
        {
            cout<<"NO"<<endl;
            l.push_back(s);
        }
        else cout<<"YES"<<endl;
    }
    return 0;
}
