#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int r,cases,n,mid;
    cin>>cases;
    while(cases--)
    {
        cin>>r;
        vector<int> nightbor;
        for(int i=0;i<r;i++)
        {
            cin>>n;
            nightbor.push_back(n);
        }
        sort(nightbor.begin(),nightbor.end());
        mid=r/2;
        int sum=0;
        for(int i=0;i<nightbor.size();i++)
        {
            sum+=abs(nightbor[i]-nightbor[mid]);
        }
        cout<<sum<<endl;
    }
    return 0;
}