#include <iostream>
using namespace std;

int main()
{
    int x;
    while(cin>>x)
    {
        if(x%5==0)
        {
            cout<<"U"<<endl;
        }
        if(x%5==1)
        {
            cout<<"G"<<endl;
        }
        if(x%5==2)
        {
            cout<<"Y"<<endl;
        }
        if(x%5==3)
        {
            cout<<"T"<<endl;
        }
        if(x%5==4)
        {
            cout<<"I"<<endl;
        }
    }



    return 0;




}
