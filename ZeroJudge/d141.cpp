#include<iostream>
using namespace std;
typedef struct
{
    int x,y;
}Point;
int main()
{
	int cases;
	char ignore;
	cin>>cases;
	while(cases--)
	{
	    Point p1,p2,p3;
	    cin>>p1.x>>ignore>>p1.y>>p2.x>>ignore>>p2.y>>p3.x>>ignore>>p3.y;
	    double m1,m2;
	    
	    if((p2.y-p1.y)*(p3.x-p2.x)==(p2.x-p1.x)*(p3.y-p2.y))
	        cout<<"collinear"<<endl;
	    else cout<<"not collinear"<<endl;
	}
	return 0;
}
