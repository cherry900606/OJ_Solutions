#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    while(getline(cin,s))
    {
        int count[128]={0};
        for(int i=0;i<s.size();i++)
            count[s[i]]++;
        for(int i=1;i<=1000;i++)
        {
            for(int j=127;j>=0;j--)
            {
                if(count[j]==i)
                    cout<<j<<" "<<i<<endl;
            }
        }
        cout<<endl;
    }
    return 0;
}
