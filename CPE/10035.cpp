#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a,b;
    while(cin>>a>>b)
    {
        if(a=="0"&&b=="0") break;
        int operation = 0;
        if(a.size()>b.size()) swap(a,b);
        for(int i=0;i<a.size();i++)
        {
            b[b.size()-i-1]=b[b.size()-i-1]+a[a.size()-i-1]-'0';
            if(b[b.size()-i-1]>'9')
            {
                b[b.size()-i-1]=(b[b.size()-i-1]-'0')%10+'0';
                b[b.size()-i-2]++;
                operation++;
            }
        }
        for(int i=b.size()-1;i>=0;i--)
        {
            if(b[i]>'9')
            {
                b[i]=(b[i]-'0')%10+'0';
                b[i-1]++;
                operation++;
            }
        }
        
        if(operation==0) cout<<"No carry operation."<<endl;
        else if(operation==1) cout<<"1 carry operation."<<endl;
        else cout<<operation<<" carry operations."<<endl;
    }
    return 0;
}