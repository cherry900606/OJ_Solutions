#include <iostream>
#include <cmath>
using namespace std;
struct Point
{
    int x,y;
};
double d(Point p1,Point p2)
{
    return sqrt(pow(p1.x-p2.x,2)+pow(p1.y-p2.y,2));
}
int main()
{
    int n,x,y,flag1,flag2;
    double maxd=0;
    cin>>n;
    Point p[1001];
    cin>>p[0].x>>p[0].y;
    for(int i=1;i<n;i++)
    {
        cin>>p[i].x>>p[i].y;
        for(int j=0;j<i;j++)
        {
            if(d(p[i],p[j])>maxd)
                maxd=d(p[i],p[j]),flag1=j,flag2=i;
        }
    }
    cout<<flag1<<" "<<flag2;
    return 0;
}
