#include <iostream>
using namespace std;

int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        int max_times=1;
        cout<<a<<" "<<b<<" ";
        if(a>b) swap(a,b);
        for(int i=a;i<=b;i++)
        {
            int times=1,n=i;
            while(n!=1)
            {
                times++;
                if(n%2) n=3*n+1;
                else n=n/2;
            }
            if(times>max_times) max_times=times;
        }
        cout<<max_times<<endl;
    }
    return 0;
}