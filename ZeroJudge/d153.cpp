#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    int t,n,arr[40001];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n);
        if(n%2==1)
            cout<<arr[n/2]<<'\n';
        else
            cout<<arr[n/2-1]<<'\n';
    }
    return 0;
}
