#include <iostream>
#include <vector>
using namespace std;

vector<string> code;
bool isValid(string ID)
{
	if (ID[0] != 'B') return false;
	if (!isdigit(ID[1]) || !isdigit(ID[2])) return false;
	if (!isdigit(ID[7]) || !isdigit(ID[8])) return false;
	string s = ID.substr(3, 4);
	for (int i = 0; i < code.size(); i++)
	{
		if (s == code[i])
			return true;
	}
	return false;
}
int main()
{
	int n, invalid = 0;
	cin >> n;
	string ID;
	while (n--)
	{
		string s;
		cin >> s;
		code.push_back(s);
	}
	for (int i = 0; i < 10; i++)
	{
		cin >> ID;
		if (isValid(ID))
			cout << "Y" << endl;
		else
			cout << "N" << endl, invalid++;
	}
	cout << invalid / 10.0;
	return 0;
}
