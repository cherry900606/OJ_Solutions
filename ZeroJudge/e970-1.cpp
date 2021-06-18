#include <iostream>
using namespace std;

int main()
{
    int n,r[1001],b,sum=0,m;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>r[i];
    b=r[n-1];
    for(int i=0;i<n;i++)
    {
        if((i+1)%b==1) sum+=r[i];
    }
    m=sum%n;
    if(m==0) cout<<n<<" "<<r[n-1];
    else cout<<m<<" "<<r[m-1];
    return 0;
}
