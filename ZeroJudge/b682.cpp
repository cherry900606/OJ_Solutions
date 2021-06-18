#include <iostream>
#include <string>
using namespace std;

int main()
{
	int h1, m1, h2, m2, ans = 0;
	cin >> h1 >> m1 >> h2 >> m2;
	ans = (h2 * 60 + m2) - (h1 * 60 + m1);
	if (ans < 0) ans += 60 * 24;
	cout << ans / 60 << " " << ans % 60;
	return 0;
}
