#include <iostream>
#include <vector>
using namespace std;

vector<int> result;
void check(string s)
{
	int zero = 0, one = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] != '0' && s[i] != '1')
		{
			result.push_back(1);
			break;
		}
	}
	if (s.size() < 8 || s.size() > 12)
		result.push_back(2);
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '0') zero++;
		else if (s[i] == '1') one++;
	}
	if (zero < 2) result.push_back(3);
	if (one < 3) result.push_back(4);
	if (s.find("101") == string::npos) result.push_back(5);
}
int main()
{
	string password;
	cin >> password;
	check(password);
	if (result.size() == 0) cout << 0;
	else
	{
		for (int i = 0; i < result.size(); i++)
		{
			if (i == 0) cout << result[i];
			else cout << " " << result[i];
		}
	}
	return 0;
}
