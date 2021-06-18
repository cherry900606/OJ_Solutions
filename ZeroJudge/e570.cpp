#include <iostream>
using namespace std;

int main()
{
    string s,s1="¤§",s2="¬O";
    while(cin>>s)
    {
        int flag=0;
        for(int i=0;i<s.size();i+=3)
        {
            if(s[i]==s1[0]&&s[i+1]==s1[1]&&s[i+2]==s1[2])
                flag=i+3;
            if(s[i]==s2[0]&&s[i+1]==s2[1]&&s[i+2]==s2[2])
                flag=i+3;
        }
        for(int i=flag;i<s.size();i+=3)
            cout<<s[i]<<s[i+1]<<s[i+2];
        for(int i=0;i<flag-3;i+=3)
            cout<<s[i]<<s[i+1]<<s[i+2];
        cout<<endl;
    }
    return 0;
}
