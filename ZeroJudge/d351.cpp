#include <iostream>
using namespace std;

int main()
{
    string s;
    while(getline(cin,s))
    {
        if(s!="___________")
        {
            int value=0;
            for(int i=0;i<s.size();i++)
            {
                if(s[i]=='o') value=value*2+1;
                else if(s[i]==' ') value*=2;
            }
            cout<<char(value);
        }
    }
    return 0;
}
