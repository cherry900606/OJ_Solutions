#include <iostream>
#include <string>
using namespace std;

string fib[5001];

string add(string a,string b) // short+long
{
    if(a.size()>b.size()) swap(a,b);
    for(int i=0;i<a.size();i++)
        b[b.size()-i-1]+=a[a.size()-1-i]-'0';
    for(int i=b.size()-1;i>=1;i--)
    {
        if(b[i]>'9')
        {
            b[i]=(b[i]-'0')%10+'0';
            b[i-1]++;
        }
    }
    if(b[0]>'9')
    {
        b[0]=(b[0]-'0')%10+'0';
        b="1"+b;
    }
    return b;
}

int main()
{
    fib[0]="0",fib[1]="1";
    for(int i=2;i<=5000;i++)
    {
        fib[i]=add(fib[i-1],fib[i-2]);
    }
    int n;
    while(cin>>n)
    {
        cout<<"The Fibonacci number for "<<n<<" is "<<fib[n]<<endl;
    }
    return 0;
}
