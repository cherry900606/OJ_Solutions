#include <iostream>
#include <set>
#include <iomanip>
using namespace std;

struct soldier
{
	string name;
	int type, rank;
	bool operator<(const soldier &right) const
	{
		if (name != right.name)
			return name < right.name;
		else
		{
			if (type != right.type)
				return type < right.type;
			else
				return rank < right.rank;
		}
	}
};
int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	int n, m;
	cin >> n >> m;
	set<soldier> legion;
	while (m--)
	{
		soldier tmp;
		cin >> tmp.name >> tmp.type >> tmp.rank;
		legion.insert(tmp);
	}
	int navy = 0, army = 0, air = 0, officer = 0, sergeant = 0, soldier = 0;
	for (auto it = legion.begin(); it != legion.end(); it++)
	{
		if ((*it).type == 1) navy++;
		if ((*it).type == 2) army++;
		if ((*it).type == 3) air++;
		if ((*it).rank == 1) officer++;
		if ((*it).rank == 2) sergeant++;
		if ((*it).rank == 3) soldier++;
	}
	cout << "navy:" << navy << " army:" << army << " air:" << air << endl;
	cout << "officer:" << officer << " sergeant:" << sergeant << " soldier:" << soldier << endl;
	cout << fixed << setprecision(1) << "survival rate: " << (double)legion.size() / n * 100 << "%";
	
	return 0;
}
