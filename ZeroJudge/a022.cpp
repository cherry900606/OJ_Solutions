#include <iostream>
#include <cstring>
using namespace std;
#define len 1000
int main()
{
    char a[len];
    while(cin>>a)
    {
        int b=strlen(a);

        for(int i=0; i<b; i++)
        {
            if(a[i]==a[b-1-i])
            {
                cout<<"yes"<<endl;
                break;
            }
            else
            {
                cout<<"no"<<endl;
                break;
            }

        }
    }


    return 0;
}
