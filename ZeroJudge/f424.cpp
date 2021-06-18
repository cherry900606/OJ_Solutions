#include <iostream>
using namespace std;

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	int n;
	long long int arr[45] = { 0,1,3 };
	for (int i = 3; i < 45; i++)
		arr[i] = arr[i - 1] + arr[i - 2];
	cin >> n;
	cout << arr[n];

	return 0;
}
