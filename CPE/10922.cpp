#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    while(cin>>s)
    {
        if(s=="0") break;
        cout<<s<<" is ";
        int times=1,sum=0;
        for(int i=0;i<s.size();i++)
            sum+=s[i]-'0';
        while(sum>=10)
        {
            times++;
            int copy=0;
            while(sum>0)
            {
                copy+=sum%10;
                sum/=10;
            }
            sum=copy;
        }
        if(sum!=9) cout<<"not a multiple of 9."<<endl;
        else cout<<"a multiple of 9 and has 9-degree "<<times<<".\n";
    }
}