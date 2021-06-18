#include <iostream>
#include <cmath>
using namespace std;
int a,b,c,d,e,f;
long long int func(int x)
{
    return a*pow(x,5)+b*pow(x,4)+c*pow(x,3)+d*pow(x,2)+e*x+f;
}
int main()
{
    int ans=0;
    cin>>a>>b>>c>>d>>e>>f;
    if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0)
    {
        cout<<"Too many... = =\""<<endl;
        return 0;
    }
    for(int i=-38;i<=36;i++)
    {
        if(func(i)*func(i+1)<0)
            cout<<i<<" "<<i+1<<endl,ans=1;
        else if(func(i)==0)
            cout<<i<<" "<<i<<endl,ans=1;
    }
    if(ans==0) cout<<"N0THING! >\\\\\\<"<<endl;
    
    return 0;
}
