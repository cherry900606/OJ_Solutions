#include <iostream>
#include <map>
#include <string>
using namespace std;
map < string, char > tbl;

void init() {
	tbl["123457"] = 'A'; tbl["1234567"] = 'B'; tbl["456"] = 'C'; tbl["1580"] = 'D'; tbl["12456"] = 'E';
	tbl["1249"] = 'F'; tbl["12569"] = 'G'; tbl["13457"] = 'H'; tbl["37"] = 'I'; tbl["3567"] = 'J';
	tbl["13459"] = 'K'; tbl["156"] = 'L'; tbl["12357"] = 'M'; tbl["3579"] = 'N'; tbl["123567"] = 'O';
	tbl["1458"] = 'P'; tbl["12347"] = 'Q'; tbl["123459"] = 'R'; tbl["12467"] = 'S'; tbl["278"] = 'T';
	tbl["13567"] = 'U'; tbl["1379"] = 'V'; tbl["135790"] = 'W'; tbl["90"] = 'X'; tbl["1347"] = 'Y';tbl["23456"] = 'Z';
}
int main()
{
	init();
	string s;
	while (getline(cin,s))
	{
		for (int i = 0; i < s.size(); i++)
		{
			if (isalpha(s[i]))
				cout << s[i];
			else if (s[i] == '0' || s[i] == ' ') cout << " ";
			else {
				string tmp;
				do {
					tmp += s[i];
					if (tbl.count(tmp))
						break;
					i++;
				} while (!isalpha(s[i]) && i < s.size());
				cout << tbl[tmp];
				
				if (isalpha(s[i]))
					cout << s[i];
			}
		}
		cout << endl;
	}
	return 0;
}
