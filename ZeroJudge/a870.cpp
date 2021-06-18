#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string command,x,n;
    vector<string> l;
    while(cin>>command)
    {
        if(command=="SHOW") break;
        if(command=="ADD")
        {
            cin>>x;
            l.push_back(x);
        }
        else if(command=="INSERT")
        {
            cin>>x>>n;
            vector<string>::iterator it=find(l.begin(),l.end(),n);
            l.insert(it,x);
        }
        else if(command=="REMOVE")
        {
            cin>>x;
            for(int i=0;i<l.size();i++)
            {
                if(l[i]==x)
                {
                    l.erase(l.begin()+i);
                    break;
                }
            }
        }
    }
    for(int i=0;i<l.size();i++)
        cout<<l[i]<<" ";
    return 0;
}
