#include <iostream>
using namespace std;

int main()
{
    string s,ss;
    int command;
    while(cin>>s)
    {
        ss=s;
        for(int i=0;i<s.size();i++)
        {
            cin>>command;
            ss[command-1]=s[i];
        }
        cout<<ss<<endl;
    }
}
