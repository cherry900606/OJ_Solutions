#include <iostream>
using namespace std;

int main() {
	cin.sync_with_stdio(false), cin.tie(0);
	int number, actions, amperes[21], product, capacity, buffer, maximum, timesCount = 1;
	bool on[21] = {};
	while (cin >> number >> actions >> capacity, number || actions || capacity) {
		for (int i = 1; i <= number; i++)
			cin >> amperes[i], on[i] = false;
		maximum = buffer = 0;
		while (actions--) {
			cin >> product, on[product] = !on[product];
			buffer += (on[product] ? amperes[product] : -amperes[product]);
			if (maximum < buffer)
				maximum = buffer;
		}
		if (timesCount > 1)
			cout << '\n';
		cout << "Sequence " << timesCount << '\n', timesCount++;
		if (maximum > capacity)
			cout << "Fuse was blown.\n";
		else
			cout << "Fuse was not blown.\nMaximal power consumption was " << maximum << " amperes.\n";
	}
}
