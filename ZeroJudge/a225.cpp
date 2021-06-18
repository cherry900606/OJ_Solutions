#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(int a,int b)
{
    if(a%10<b%10) return true;
    else if(a%10==b%10) return a>b;
    return false;
}
int main()
{
    int n,arr[1001];
    while(cin>>n)
    {
        for(int i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n,cmp);
        for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
        cout<<endl;
    }
    
    return 0;
}
