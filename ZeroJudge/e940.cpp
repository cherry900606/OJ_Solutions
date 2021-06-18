#include <iostream>
using namespace std;

int main()
{
    int n;
    string s,ss;
    char c;
    cin>>s>>n;
    for(int i=0;i<s.size();i++)
        ss+="*";
    cout<<ss<<endl;
    while(n--)
    {
        cin>>c;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==c)
                ss[i]=c;
        }
        cout<<ss<<endl;
    }
    return 0;
}
