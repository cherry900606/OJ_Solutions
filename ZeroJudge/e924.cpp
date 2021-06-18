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
        int flag=1;
        cin>>s;
        stack<char> st;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='('||s[i]=='['||s[i]=='<'||s[i]=='{') st.push(s[i]);
            else
            {
                if(st.empty())
                {
                    flag=0;
                    break;
                }
                else if(s[i]==')'&&st.top()=='(') st.pop();
                else if(s[i]==']'&&st.top()=='[') st.pop();
                else if(s[i]=='>'&&st.top()=='<') st.pop();
                else if(s[i]=='}'&&st.top()=='{') st.pop();
                else
                {
                    flag=0;
                    break;
                }
            }
        }
        if(flag==1&&st.empty()) cout<<'Y'<<endl;
        else cout<<'N'<<endl;
    }
    
    return 0;
}
