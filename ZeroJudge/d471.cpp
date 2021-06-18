#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        string s;
        for(int i=0;i<n;i++)
            s+="0";
        for(int i=0;i<pow(2,n);i++)
        {
            cout<<s<<endl;
            s[s.size()-1]++;
            for(int j=s.size()-1;j>=0;j--)
            {
                if(s[j]>'1')
                {
                    s[j-1]++;
                    s[j]='0';
                }
            }
        }
    }
    return 0;
}
