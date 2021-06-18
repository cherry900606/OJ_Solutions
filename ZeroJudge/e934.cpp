#include <iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='T') cout<<'A';
        else if(s[i]=='A') cout<<'U';
        else if(s[i]=='G') cout<<'C';
        else cout<<'G';
    }
}
