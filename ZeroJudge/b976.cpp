#include <iostream>
#include <cmath>
using namespace std;
struct Point
{
    int x,y;  
};
double distance(Point a,Point b)
{
    return sqrt(pow(a.x-b.x,2)+pow(a.y-b.y,2));
}
int main()
{
    int n,m,a,b;
    cin>>n>>m;
    Point p[1001],ask;
    for(int i=0;i<n;i++)
        cin>>p[i].x>>p[i].y;
    while(m--)
    {
        cin>>ask.x>>ask.y;
        double dist=distance(p[0],ask);
        int flag=0;
        for(int i=0;i<n;i++)
        {
            if(dist>distance(p[i],ask))
            {
                flag=i;
                dist=distance(p[i],ask);
            }
        }
        cout<<flag+1<<endl;
    }
    
}
