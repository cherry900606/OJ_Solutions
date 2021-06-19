#include <iostream>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        for(int i=1;i<=n;i++)
        {
            int x1,y1,x2,y2;
            cin>>x1>>y1>>x2>>y2;
            long long int step1=(x1+y1)*(x1+y1+1ll)/2+x1;
            long int step2=(x2+y2)*(x2+y2+1ll)/2+x2;
            cout<<"Case "<<i<<": "<<abs(step1-step2)<<endl;            
        }
    }
    return 0;
}