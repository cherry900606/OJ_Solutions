#include <iostream>
using namespace std;

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	int n;
	long long int ans = 0;
	cin >> n;
	if (!n % 2) n--;
	for (int i = 1; i <= n; i += 2)
		ans += i;
	cout << ans;
	return 0;
}
