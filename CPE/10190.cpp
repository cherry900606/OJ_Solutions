#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        vector<int> sq;
        if(n<=1||m<=1)
        {
            cout<<"Boring!"<<endl;
            continue;
        }
        while(n%m==0)
        {
            sq.push_back(n);
            n/=m;
        }
        if(n!=1) cout<<"Boring!"<<endl;
        else
        {
            for(int i=0;i<sq.size();i++)
            {
                if(i!=sq.size()-1)
                    cout<<sq[i]<<" ";
                else
                    cout<<sq[i]<<" 1"<<endl;
            }
        }
    }
    return 0;
}