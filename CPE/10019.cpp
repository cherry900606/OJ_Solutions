#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int b1=0,copy,b2=0;
        cin>>n;
        copy=n;
        while(copy>0)
        {
            b1+=copy%2;
            copy/=2;
        }
        
        copy=n;
        int times=0,x2=0;
        while(copy>0)
        {
            x2+=pow(16,times)*(copy%10);
            times++;
            copy/=10;
        }
        copy=x2;
        while(copy>0)
        {
            b2+=copy%2;
            copy/=2;
        }
        cout<<b1<<" "<<b2<<endl;
    }
    return 0;
}