#include <iostream>
using namespace std;

int main()
{
    long long int n,m;
    while(cin>>n>>m)
    {
        if(m==0) cout<<"Go Kevin!!"<<endl;
        else if((n-1)%m==0) cout<<"Go Kevin!!"<<endl;
        else cout<<"No Stop!!"<<endl;
    }
    return 0;
}
