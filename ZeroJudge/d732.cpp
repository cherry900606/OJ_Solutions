#include <iostream>
using namespace std;
int search(int arr[], int len, int x)
{
	int left = 0, right = len - 1, mid = (left + right) / 2;
	while (1)
	{
		if (arr[mid] == x) return mid + 1;
		if (mid < 0 || mid >= len || left >= right) return 0;
		if (arr[mid] > x) right = mid - 1;
		else left = mid + 1;
		mid = (right + left) / 2;
	}
}
int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	int n, k, x;
	cin >> n >> k;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	for (int i = 0; i < k; i++)
	{
		cin >> x;
		cout << search(arr, n, x) << endl;
	}
	return 0;
}
