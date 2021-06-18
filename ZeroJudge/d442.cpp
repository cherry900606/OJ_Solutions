#include <iostream>
using namespace std;

int add(int n)
{
    int ans=0;
    while(n>0)
    {
        ans+=(n%10)*(n%10);
        n/=10;
    }
    return ans;
}
int main()
{
    int n,cases=1;
    cin>>cases;
    for(int i=1;i<=cases;i++)
    {
        cin>>n;
        cout<<"Case #"<<i<<": "<<n<<" ";
        while(n!=1)
        {
            n=add(n);
            if(n==4) break;
        }
        if(n==1) cout<<"is a Happy number."<<endl;
        else cout<<"is an Unhappy number."<<endl;
    }
    return 0;
}
