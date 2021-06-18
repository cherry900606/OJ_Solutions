#include <iostream>
#include <string>
#include <sstream>
#include <stack>
using namespace std;
int priority(char c)
{
	if (c == '*' || c == '/') return 0;
	if (c == '+' || c == '-') return 1;
	else return 2;
}
int main()
{
	string s;
	while (getline(cin, s))
	{
		stringstream ss(s);
		stack<char> st;
		st.push('(');
		s += ")";
		for (int l = 0; l < s.size(); l++)
		{
			if (s[l] == ' ') continue;
			if (s[l] == '(') st.push('(');
			else if (s[l] == ')')
			{
				while (st.top() != '(')
				{
					cout << st.top() << " ";
					st.pop();
				}
				st.pop();
			}
			else if ('a' <= s[l] && s[l] <= 'z')
			{
				cout << s[l] << " ";
			}
			else
			{
				while (priority(st.top()) <= priority(s[l]))
				{
					cout << st.top() << " ";
					st.pop();
				}
				st.push(s[l]);
			}
		}
		while (!st.empty())
		{
			cout << st.top() << " ";
			st.pop();
		}
		cout << endl;
	}
	return 0;
}
