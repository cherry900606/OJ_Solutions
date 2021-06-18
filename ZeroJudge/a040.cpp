#include <iostream>
#include <cmath>
using namespace std;
bool isArms(int n)
{
    int len=to_string(n).size(),total=0,copy=n;
    while(n>0)
    {
        total+=pow(n%10,len);
        n/=10;
    }
    if(total==copy) return true;
    else return false;
}
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    int n,m,none=1;
    cin>>n>>m;
    for(int i=n;i<=m;i++)
    {
        if(isArms(i)) cout<<i<<" ",none=0;
    }
    if(none) cout<<"none";
    return 0;
}
