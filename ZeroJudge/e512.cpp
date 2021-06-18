#include <iostream>
#include <iomanip>
using namespace std;
typedef struct
{
    double x,y;
}Point;
int main()
{
    Point p1,p2,p3,p4;
    cout<<fixed<<setprecision(3);
    while(cin>>p1.x>>p1.y>>p2.x>>p2.y>>p3.x>>p3.y>>p4.x>>p4.y)
    {
        if(p1.x==p3.x&&p1.y==p3.y) swap(p1,p2);
        else if(p1.x==p4.x&&p1.y==p4.y) swap(p1,p2),swap(p3,p4);
        else if(p2.x==p4.x&&p2.y==p4.y) swap(p3,p4);
        Point p5;
        p5.x=p1.x+p4.x-p2.x;
        p5.y=p1.y+p4.y-p2.y;
        cout<<p5.x<<" "<<p5.y<<endl;
    }
    return 0;
}
