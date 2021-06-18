#include <iostream>
#include <cmath>
using namespace std;
int to_dec(int x,int e)
{
    int ans=0,flag=1;
    while(x>0)
    {
        ans+=(x%10)*flag;
        flag*=e;
        x/=10;
    }
    return ans;
}
int l(int n)
{
    int ans=0;
    while(n>0)
    {
        ans++;
        n/=10;
    }
    return ans;
}
int main()
{
    int n,b;
    while(cin>>b>>n)
    {
        int num=to_dec(n,b),len=l(n),sum=0;
        while(n>0)
        {
            sum+=pow(n%10,len);
            n/=10;
        }
        if(sum==num) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
