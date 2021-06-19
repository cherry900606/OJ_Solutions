#include <iostream>
using namespace std;

int main()
{
    int t;
    while(cin>>t)
    {
        for(int i=1;i<=t;i++)
        {
            int a,b,sum=0;
            cin>>a>>b;
            for(int j=a;j<=b;j++)
            {
                if(j%2) sum+=j;
            }
            cout<<"Case "<<i<<": "<<sum<<endl;
        }
    }
    return 0;
}