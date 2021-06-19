#include <iostream>
using namespace std;

int main()
{
    int f[40],n,num;
    f[0]=f[1]=1;
    for(int i=2;i<40;i++)
        f[i]=f[i-1]+f[i-2];
    cin>>n;
    while(n--)
    {
        int start=0;
        cin>>num;
        cout<<num<<" = ";
        for(int i=39;i>=1;i--)
        {
            if(num/f[i]) cout<<"1",start=1;
            else if(start) cout<<"0";
            num%=f[i];
        }
        cout<<" (fib)"<<endl;
    }
    return 0;
}