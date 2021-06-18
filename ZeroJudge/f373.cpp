#include <iostream>
using namespace std;

int main()
{
	int n, flag1, flag2;
	cin >> n;
	flag1 = n - (n / 2000) * 200;
	flag2 = n - (n / 1000) * 100;
	if (flag1 <= flag2) cout << flag1 << " 0";
	else cout << flag2 << " 1" << endl;
	return 0;
}
