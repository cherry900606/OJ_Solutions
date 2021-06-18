#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int n;
    while(cin>>n&&n)
    {
        while(1)
        {
            stack<int> s;
            int a[n],pointer=1,i;
            cin>>a[0];
            if(a[0]==0) break;
            for(int i=1;i<n;i++)
                cin>>a[i];
            for(i=0;i<n;i++)
            {
                if(!s.empty()&&s.top()==a[i])
                    s.pop();
                else if(a[i]>=pointer)
                {
                    for(int j=pointer;j<a[i];j++)
                        s.push(j);
                    pointer=a[i]+1;
                }
                else
                    break;
            }
            if(i==n)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
        cout<<endl;
    }
    return 0;
}
