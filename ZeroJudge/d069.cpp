#include <iostream>
using namespace std;

int main()
{
    int t,y;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>y;
        if(y%4==0 && y%100!=0 || y%400==0)
            cout<<"a leap year"<<endl;
        else
            cout<<"a normal year"<<endl;
        
    }
    return 0;
}
