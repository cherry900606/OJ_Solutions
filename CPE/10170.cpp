#include <iostream>
using namespace std;

int main()
{
    unsigned long long int s,d;
    while(cin>>s>>d)
    {
        unsigned long long int days=0;
        while(days<d)
        {
            days+=s;
            s++;
        }
        cout<<s-1<<endl;
    }
}