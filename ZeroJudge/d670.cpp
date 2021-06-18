#include <iostream>
using namespace std;

int main()
{
    string s;
    while(cin>>s)
    {
        for(int i=0;i<s.size();i++)
        {
            if(isalpha(s[i]))
            {
                if('A'<=s[i]&&s[i]<='C') cout<<'2';
                else if('D'<=s[i]&&s[i]<='F') cout<<'3';
                else if('G'<=s[i]&&s[i]<='I') cout<<'4';
                else if('J'<=s[i]&&s[i]<='L') cout<<'5';
                else if('M'<=s[i]&&s[i]<='O') cout<<'6';
                else if('P'<=s[i]&&s[i]<='S') cout<<'7';
                else if('T'<=s[i]&&s[i]<='V') cout<<'8';
                else cout<<'9';
            }
            else cout<<s[i];
        }
        cout<<endl;
    }
    return 0;
}
