#include <iostream>
using namespace std;

int main()
{
    int t,n,mycount=1;
    cin>>t;
    for(int k=0;k<t;k++)
    {
        cin>>n;
        int a[50];
        int high=0,low=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        a[n] = 11;
        for(int i=0;i<n;i++)
        {
            if(a[i]>a[i+1])
            {
                low++;
            }
            if(a[i]<a[i+1])
            {
                high++;
            }
        }

        cout<<"Case "<<mycount<<": "<<high-1<<" "<<low<<endl;
        mycount ++;
    }

    return 0;

}
