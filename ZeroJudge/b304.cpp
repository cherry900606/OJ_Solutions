#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main()
{
    int n;
    cin>>n;
    getchar();
    while(n--)
    {
        int check=0;
        string s;
        stack<char> q;
        getline(cin,s);
        while(!q.empty()) q.pop();
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='('||s[i]=='[')
                q.push(s[i]);
            else if(s[i]==')')
            {
                if(q.empty()||q.top()!='(')
                {
                    check=1;
                    break;
                }
                q.pop();
            }
            else if(s[i]==']')
            {
                if(q.empty()||q.top()!='[')
                {
                    check=1;
                    break;
                }
                q.pop();
            }
        }
        if(!q.empty())
            check=1;
        if(check)
            cout<<"No"<<endl;
        else
            cout<<"Yes"<<endl;
    }
    return 0;
}
