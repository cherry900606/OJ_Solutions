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
        if(((y3-y1)*(x2-x1))==((x3-x1)*(y2-y1))) // �u�W
        {
            if(min(x1,x2)<=x3&&x3<=max(x1,x2)&&min(y1,y2)<=y3&&y3<=max(y1,y2))
                cout<<"�Ӧ����F��!�����Q���ڦ��I"<<endl;
            else
                cout<<"���ˤj�H!���ˤj�H!�ڧ֨�F�I"<<endl;
        }
        else
            cout<<"���ˤj�H!���ˤj�H!�ڧ֨�F�I"<<endl;
    }
    return 0;
}
