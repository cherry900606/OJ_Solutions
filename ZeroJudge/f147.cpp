#include <string>
#include <iostream>
using namespace std;

int main()
{
    int command,sum=0,order;
    string menu1[5]={"Medium Wac","WChicken Nugget","Geez Burger","ButtMilk Crispy Chicken","Plastic Toy"};
    string menu2[4]={"German Fries","Durian Slices","WcFurry","Chocolate Sunday"};
    int price1[5]={4,8,7,6,3},price2[4]={2,3,5,7};
    while(cin>>command)
    {
        if(command==0) break;
        else if(command==1)
        {
            cin>>order;
            cout<<menu1[order-1]<<" "<<price1[order-1]<<endl;
            sum+=price1[order-1];
        }
        else if(command==2)
        {
            cin>>order;
            cout<<menu2[order-1]<<" "<<price2[order-1]<<endl;
            sum+=price2[order-1];
        }
    }
    cout<<"Total: "<<sum<<endl;
    return 0;
}
