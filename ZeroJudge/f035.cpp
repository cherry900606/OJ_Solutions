#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    for(int i=0;i<s.size()-1;i++)
        cout<<(int)s[i]<<"_";
    cout<<(int)s[s.size()-1];
    return 0;
}
