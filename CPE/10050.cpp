#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,p,h,ans=0;
        cin>>n>>p;
        vector<int> party;
        for(int j=0;j<p;j++)
        {
            cin>>h;
            party.push_back(h);
        }
        for(int j=1;j<=n;j++)
        {
            for(int k=0;k<party.size();k++)
            {
                if(j%party[k]==0&&j%7!=6&&j%7!=0)
                {
                    ans++;
                    break;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}