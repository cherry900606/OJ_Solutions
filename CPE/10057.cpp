#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n,arr[1000001];
    while(cin>>n)
    {
        int A,two=0,three=0;
        for(int i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n);
        if(n%2) // odd
        {
            A=arr[n/2];
            for(int i=0;i<n;i++)
            {
                if(arr[i]==A) two++;
            }
            three=1;
        }
        else // even
        {
            A=arr[n/2-1];
            for(int i=0;i<n;i++)
            {
                if(arr[i]==arr[n/2]||arr[i]==arr[n/2-1])
                    two++;
            }
            three=arr[n/2]-arr[n/2-1]+1;
        }
        cout<<A<<" "<<two<<" "<<three<<endl;
    }
    return 0;
}