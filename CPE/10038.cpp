#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n,tmp;
    while(cin>>n)
    {
        vector<int> sq;
        vector<int> diff;
        for(int i=0;i<n;i++)
        {
            cin>>tmp;
            sq.push_back(tmp);
        }
        for(int i=0;i<sq.size()-1;i++)
            diff.push_back(abs(sq[i]-sq[i+1]));
        sort(diff.begin(),diff.end());
        int i;
        for(i=0;i<n-1;i++)
        {
            if(i+1!=diff[i]) break;
        }
        if(i==n-1) cout<<"Jolly"<<endl;
        else cout<<"Not jolly"<<endl;
        
    }
    return 0;
}