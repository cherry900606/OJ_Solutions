#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Student
{
public:
	string name, sentence;
	int _class, index;
};
bool cmp(Student s1, Student s2)
{
	if (s1._class < s2._class) return true;
	if (s1._class > s2._class) return false;
	if (s1.index < s2.index) return true;
	else return false;
}
int main()
{
	int n;
	while (cin >> n)
	{
		vector<Student> school;
		for (int i = 0; i < n; i++)
		{
			Student tmp;
			cin >> tmp.name >> tmp._class >> tmp.index >> tmp.sentence;
			school.push_back(tmp);
		}
		sort(school.begin(), school.end(), cmp);
		for (int i = 0; i < school.size(); i++)
		{
			cout << school[i]._class << " " << school[i].index << " " << school[i].name << endl<< school[i].sentence;
			if (i != school.size() - 1)cout << endl;
		}
	}
	return 0;
}
