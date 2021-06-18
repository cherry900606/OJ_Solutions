#include <iostream>
using namespace std;


int main()
{
    int n,index[1001],sum=0;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>index[i];
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(index[i]>index[j])
            {
                swap(index[i],index[j]);
                sum++;
            }
        }
    }
    cout<<sum<<endl;
}
