#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s[5];
	for (int i = 0; i < 5; i++)
		cin >> s[i];
	for (int i = 0; i < 5; i++)
	{
		for (int j = i; j < 5; j++)
			cout << s[j] << " ";
		cout << endl;
	}
	return 0;
}
