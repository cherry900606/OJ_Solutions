#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n,arr[101],times=1;
    while(cin>>n)
    {
        int flag=1;
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int i=0;i<n-1;i++)
        {
            if(arr[i]>0&&arr[i]<arr[i+1]);
            else flag=0;
        }
        vector<int> sq;
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                
                if(find(sq.begin(),sq.end(),arr[i]+arr[j])!=sq.end())
                    flag=0;
                else
                    sq.push_back(arr[i]+arr[j]);
            }
        }
        cout<<"Case #"<<times++<<": ";
        if(flag==0) cout<<"It is not a B2-Sequence."<<endl;
        else cout<<"It is a B2-Sequence."<<endl;
        cout<<endl;
    }
    return 0;
}