#include <iostream>
using namespace std;

bool isSame(string s,int a,int b)
{
    char flag=s[min(a,b)];
    for(int i=min(a,b);i<=max(a,b);i++)
    {
        if(s[i]!=flag)
            return false;
    }
    return true;
}
int main()
{
    int cases=1,n,i,j;
    string s;
    while(cin>>s)
    {
        cout<<"Case "<<cases++<<":"<<endl;
        cin>>n;
        while(n--)
        {
            cin>>i>>j;
            if(isSame(s,i,j)) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
    }
    return 0;
}
