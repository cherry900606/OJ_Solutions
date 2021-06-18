#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
	string companions, containers, objects, items, somethings;
	string n_companions, n_containers, n_objects, n_items;
	string s;
	string n[14] = { "ZERO","ONE","TWO","THREE","FOUR","FIVE","SIX","SEVEN","EIGHT","NINE","TEN","ELEVEN","TWELVE","THIRTEEN" };
	map<string, int> index;
	for (int i = 0; i < 14; i++)
		index[n[i]] = i;
	cin >> s >> s >> s >> n_companions >> companions;
	cin >> s >> s >> s >> n_containers >> containers;
	cin >> s >> s >> s >> n_objects >> objects;
	cin >> s >> s >> s >> n_items >> items;
	cin >> s >> s >> somethings;
	somethings.erase(somethings.size() - 1, 1);
	if (somethings == companions)
		cout << index[n_companions];
	else if (somethings == containers)
		cout << index[n_companions] * index[n_containers];
	else if (somethings == objects)
		cout << index[n_companions] * index[n_containers] * index[n_objects];
	else if (somethings == items)
		cout << index[n_companions] * index[n_containers] * index[n_objects] * index[n_items];
	cout << " " << somethings;
	return 0;
}
