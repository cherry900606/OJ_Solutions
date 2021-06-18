#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    string s,tmp;
    int t;
    cin>>t;
    getchar();
    while(t--)
    {
        long long int ans=0;
        getline(cin,s);
        stringstream ss(s);
        while(ss>>tmp)
        {
            if(tmp!="+") ans+=stoi(tmp);
        }
        cout<<ans<<endl;
    }
}
