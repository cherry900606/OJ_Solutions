#include <iostream>
#include <vector>
using namespace std;

struct user {
	string name, status, first_status;
};
int main()
{
	int n, ac = 0, totalAC = 0;
	vector<user> database;
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	cin >> n;
	while (n--)
	{
		bool isExist = false;
		string n_tmp, s_tmp;
		cin >> n_tmp >> s_tmp;
		for (int i = 0; i < database.size(); i++)
		{
			if (database[i].name == n_tmp)
			{
				isExist = true;
				database[i].first_status = s_tmp;
				if(s_tmp=="AC")
					database[i].status = s_tmp;
				break;
			}
		}
		if (!isExist)
		{
			user tmp;
			tmp.name = n_tmp;
			tmp.status = tmp.first_status = s_tmp;
			database.push_back(tmp);
		}
	}
	for (int i = 0; i < database.size(); i++)
	{
		if (database[i].status == "AC")
			totalAC++;
		if (database[i].first_status == "AC")
			ac++;
	}
	cout << (double)ac / totalAC * 100 << "%" << endl;
	return 0;
}
