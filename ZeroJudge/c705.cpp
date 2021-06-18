#include <iostream>
using namespace std;

int main()
{
	long long int x;
	while (cin >> x)
	{
		cout << (x / 16777216) << "." << ((x % 16777216) / 65536) << "." << ((x % 65536) / 256) << "." << x % 256 << endl;
	}
	return 0;
}
