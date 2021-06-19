#include <iostream>
using namespace std;


int main()
{
    int cases,index[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    string week[7]={"Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday","Friday"};
    cin>>cases;
    while(cases--)
    {
        int m,d,total=0;
        cin>>m>>d;
        for(int i=0;i<m-1;i++)
            total+=index[i];
        total+=d;
        cout<<week[(total-1)%7]<<endl;
    }
}