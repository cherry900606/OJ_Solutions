#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    int n,m,tmp;
    while(cin>>n>>m)
    {
        vector<vector<int>> l;
        for(int i=0;i<n;i++)
        {
            vector<int> ll;
            for(int j=0;j<m;j++)
            {
                cin>>tmp;
                ll.push_back(tmp);
            }
            l.push_back(ll);
        }
        sort(l.begin(),l.end());
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
                cout<<l[i][j]<<" ";
            cout<<'\n';
        }
    }
    return 0;
}
