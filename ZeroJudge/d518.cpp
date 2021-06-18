#include <iostream>
#include <map>
using namespace std;

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    int n;
    string temp;
    while(cin>>n)
    {
        int len=1;
        map<string,int> m;
        map<string,int>::iterator it;
        while(n--)
        {
            cin>>temp;
            it=m.find(temp);
            if(it!=m.end())
                cout<<"Old! "<<it->second<<'\n';
            else
            {
                cout<<"New! "<<len<<'\n';
                m[temp]=len++;
            }
        }
    }
    
    return 0;
}
