#include <iostream>
#include <cmath>
using namespace std;
struct Point {
	int x, y;
};
double distance(Point p1, Point p2)
{
	return sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
}
double area(Point p1, Point p2, Point p3)
{
	double a, b, c, s;
	a = distance(p1, p2); b = distance(p2, p3); c = distance(p1, p3);
	s = (a + b + c) / 2;
	return sqrt(s * (s - a) * (s - b) * (s - c));
}
int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	Point p1, p2, p3;
	cin >> p1.x >> p1.y >> p2.x >> p2.y >> p3.x >> p3.y;
	cout << area(p1, p2, p3) * 2;
	return 0;
}
