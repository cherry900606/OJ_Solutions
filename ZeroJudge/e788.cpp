#include <iostream>
#include <algorithm>
using namespace std;
struct Student {
	int order;
	string ID, name;
};
bool cmp(Student a, Student b)
{
	if (a.ID[8] != b.ID[8])
		return a.ID[8] < b.ID[8];
	else if (a.ID[0] != b.ID[0])
		return a.ID[0] < b.ID[0];
	else 
		return a.order<b.order;
}
int main()
{
	int n;
	cin >> n;
	Student* list = new Student[n];
	for (int i = 0; i < n; i++) {
		cin >> list[i].ID >> list[i].name;
		list[i].order = i;
	}
	sort(list, list + n, cmp);
	for (int i = 0; i < n; i++)
		cout << list[i].ID[8] << ": " << list[i].name << endl;
	return 0;
}
