#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int t;
    string s;
    cin>>t;
    while(t--)
    {
        int count=0;
        stack<int> stk;
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
            if(!stk.empty()&&stk.top()=='('&&s[i]==')')
            {
                count++;
                stk.pop();
            }
            else
                stk.push(s[i]);
        }
        if(!stk.empty())
            count=0;
        cout<<count<<endl;
    }
    return 0;
}
