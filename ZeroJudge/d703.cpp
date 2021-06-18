#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n,m,i;
    while(cin>>n>>m)
    {
        char s[21];
        for(int i=0;i<21;i++)
            s[i]='\0';
        for(i=0;i<n;i++)
            s[i]='S';
        for(;i<n+m;i++)
            s[i]='L';
        do{
            cout<<s<<endl;
        }while(prev_permutation(s,s+n+m));
        cout<<endl;
    }
    return 0;
}
