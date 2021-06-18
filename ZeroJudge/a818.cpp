#include <iostream>
using namespace std;
string decode(int len, int seq[], string s)
{
	string result = s;
	for (int i = 0; i < len; i++)
	{
		result[i] = s[seq[i] - 1];
	}
	return result;
}
int main()
{
	string s;
	int n, k;
	cin >> n;
	int* seq = new int[n + 1];
	for (int i = 0; i < n; i++)
		cin >> seq[i];
	cin >> s >> k;
	for (int i = 0; i < k; i++)
		s = decode(n, seq, s);
	cout << s;
	return 0;
}
