#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    while(cin>>s)
    {
        int sum=0;
        for(int i=0;i<s.size();i++)
        {
            if('0'<=s[i]&&s[i]<='9')
                sum+=s[i]-'0';
        }
        if(sum%3==0) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    return 0;
}
