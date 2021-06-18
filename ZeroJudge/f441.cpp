#include <iostream>
using namespace std;

int main()
{
	int n, points,studentN;
	cin >> n >> points;
	int* ans = new int[n];
	for (int i = 0; i < n; i++)
		cin >> ans[i];
	cin >> studentN;
	while (studentN--)
	{
		int score = 0, p;
		for (int i = 0; i < n; i++)
		{
			cin >> p;
			if (p == ans[i]) score += points;
		}
		cout << score << endl;
	}
}
