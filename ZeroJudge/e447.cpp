#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<int> q;
    int n,k,x;
    cin>>n;
    while(n--)
    {
        cin>>k;
        if(k==1)
        {
            cin>>x;
            q.push(x);
        }
        else if(k==2)
        {
            if(q.empty())
                cout<<-1<<endl;
            else
                cout<<q.front()<<endl;
        }
        else
        {
            if(!q.empty())
                q.pop();
        }
    }
    return 0;
}
