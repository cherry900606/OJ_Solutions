#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==' ')
        {
            //cout<<s<<endl;
            continue;
        }
        for(int j=0;j<s.size();j++)
        {
            if(s[j]==' ') cout<<s[j];
            else if(i==j) // capital
            {
                if('a'<=s[j]&&s[j]<='z') cout<<char(s[j]-'a'+'A');
                else cout<<s[j];
            }
            else //non-capital
            {
                if('a'<=s[j]&&s[j]<='z') cout<<s[j];
                else cout<<char(s[j]-'A'+'a');
            }
        }
        cout<<endl;
    }
    return 0;
}
