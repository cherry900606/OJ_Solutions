#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    while(getline(cin,s))
    {
        string index="`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==' '||s[i]=='\n') cout<<s[i];
            else
            {
                for(int j=0;j<index.size();j++)
                {
                    if(s[i]==index[j])
                        cout<<index[j-2];
                }
            }
        }
        cout<<endl;
    }
    return 0;
}