#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n,x1,y1,x2,y2,x3,y3;
    cin>>n;
    while(n--)
    {
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        if(((y3-y1)*(x2-x1))==((x3-x1)*(y2-y1))) // 線上
        {
            if(min(x1,x2)<=x3&&x3<=max(x1,x2)&&min(y1,y2)<=y3&&y3<=max(y1,y2))
                cout<<"該死的東西!竟敢想讓我死！"<<endl;
            else
                cout<<"父親大人!母親大人!我快到了！"<<endl;
        }
        else
            cout<<"父親大人!母親大人!我快到了！"<<endl;
    }
    return 0;
}
