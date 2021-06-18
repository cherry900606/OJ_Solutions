#include <iostream>
using namespace std;

int main()
{
    string s;
    while(cin>>s)
    {
        if(s=="0") break;
        int n=0;
        for(int i=0;i<s.size();i++)
        {
            n=n*10+s[i]-'0';
            n%=17;
        }
        if(!n) cout<<"1\n";
        else cout<<"0\n";
    }
    return 0;
}
