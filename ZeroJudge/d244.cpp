#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n;
    map<int,int> rock;
    while(cin>>n)
    {
        if(rock.find(n)==rock.end())
            rock[n]=1;
        else
            rock[n]++;
    }
    map<int,int>::iterator iter;
    for(iter=rock.begin();iter!=rock.end();iter++)
    {
        if(iter->second==2)
        {
            cout<<iter->first;
            break;
        }
            
    }
    return 0;
}
