#include <iostream>
using namespace std;
int main()
{
    int n,index[21]={0},tmp;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>tmp;
        index[tmp]=1;
    }
    for(int i=n;i>=1;i--)
    {
        if(index[i]==0) cout<<"No. "<<i<<endl;
    }
    return 0;
}
