#include <iostream>
using namespace std;

int main()
{
	int n, d, items = 0, cost = 0;
	cin >> n >> d;
	while (n--)
	{
		int price, min = 101, max = 0, sum = 0;
		for (int i = 0; i < 3; i++)
		{
			cin >> price;
			sum += price;
			if (price < min) min = price;
			if (price > max) max = price;
		}
		if (max - min >= d)
		{
			items++;
			cost += sum / 3;
		}
	}
	cout << items << " " << cost;
	return 0;
}
