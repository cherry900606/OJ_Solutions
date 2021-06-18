#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        string s;
        for(int i=n;i>=1;i--)
            s+=i+'0';
        do{
            cout<<s<<endl;
        }while(prev_permutation(s.begin(),s.end()));
    }
    return 0;
}
