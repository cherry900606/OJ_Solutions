#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        if(a==0&&b==0) break;
        int sum=0;
        for(int i=a;i<=b;i++)
        {
            int sr=sqrt(i);
            if(sr*sr==i)
                sum++;
        }
        cout<<sum<<endl;
    }
    return 0;
}