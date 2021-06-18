#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		int count = 0, top, tmp;
		vector<int> m;
		cin >> tmp;
		m.push_back(tmp);
		for (int i = 1; i < n; i++)
		{
			cin >> tmp;
			if (tmp != m.back()) m.push_back(tmp);
		}
		/*for (int i = 0; i < m.size(); i++)
		{
			cout << m[i] << "";
		}
		cout << endl;*/
		for (int i = 1; i < m.size()-1; i++)
		{
			if (m[i - 1] < m[i] && m[i] > m[i + 1])
				count++;
		}
		cout << count << endl;
		
	}
	return 0;
}
