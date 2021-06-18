#include <iostream>
using namespace std;


int main()
{
    int n;
    while(cin>>n){
        for(int i=1; i<=n-1; i++)
        {
            if(i%7!=0)
            {
                cout<<i<<" ";
            }
        }
        cout<<endl;
    }


    return 0;
}
