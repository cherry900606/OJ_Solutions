#include <stack>
#include <iostream>
using namespace std;

int main()
{
    int n,cmd,temp;
    stack<int> s;
    cin>>n;
    while(n--)
    {
        cin>>cmd;
        if(cmd==1)
        {
            s.pop();
        }
        else if(cmd==2)
        {
            cout<<s.top()<<endl;
        }
        else
        {
            cin>>temp;
            s.push(temp);
        }
    }
    return 0;
}
