#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n,temp;
    cin>>n;
    map<int,int> m;
    map<int,int>::iterator it;
    while(n--)
    {
        cin>>temp;
        it=m.find(temp);
        if(it!=m.end()) // in map
            (it->second)++;
        else
            m[temp]=1;
    }
    for(it=m.begin();it!=m.end();it++)
        cout<<it->first<<" "<<it->second<<endl;
    return 0;
}
