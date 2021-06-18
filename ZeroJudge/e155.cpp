#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int n;
    while(cin>>n&&n)
    {
        int count=0;
        queue<int> q;
        for(int i=1;i<=n;i++)
            q.push(i);
        cout<<"Discarded cards: ";
        while(q.size()>=2)
        {
            if(count) cout<<", ";
            count++;
            cout<<q.front();
            q.pop();
            int temp=q.front();
            q.pop();
            q.push(temp);
        }
        cout<<endl;
        cout<<"Remaining card: "<<q.front()<<endl;;
    }
    return 0;
}
