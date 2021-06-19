#include <iostream>
#include <algorithm>
using namespace std;

int n,m;
bool cmp(int a,int b)
{
    if(a%m!=b%m) return a%m<b%m;
    if(abs(a%2)==1&&abs(b%2)==1) return a>b;
    if(abs(a%2)==0&&abs(b%2)==0) return a<b;
    return abs(a%2);
}
int main()
{
    int l[10001];
    while(cin>>n>>m)
    {
        cout<<n<<" "<<m<<endl;
        if(n==0&&m==0) break;
        for(int i=0;i<n;i++)
            cin>>l[i];
        sort(l,l+n,cmp);
        
        for(int i=0;i<n;i++)
            cout<<l[i]<<endl;
    }
    return 0;
}