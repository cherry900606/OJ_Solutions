#include <iostream>
#include <stack>
using namespace std;

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    int n;
    string c;
    while(cin>>n)
    {
        while(n--)
        {
            int ans=0;
            stack<int> s;
            cin>>c;
            for(int i=0;i<c.size();i++)
            {
                if(c[i]=='p') s.push(c[i]);
                else if(c[i]=='q'&&!s.empty())
                {
                    ans++;
                    s.pop();
                }
            }
            cout<<ans<<'\n';
        }
    }
    return 0;
}
