#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
    int n,arr[100001];
    map<int,int> m;
    map<int,int>::reverse_iterator it;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++)
        m[arr[i]]++;
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    for(it=m.rbegin();it!=m.rend();it++)
        cout<<it->first<<" ";
}
