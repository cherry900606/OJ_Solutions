#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main()
{
	int n, x, command;
	while (cin >> n)
	{
		stack<int> st;
		queue<int> q;
		priority_queue<int> pq;
		bool isStack = true, isQueue = true, isPQ = true;
		while (n--)
		{
			cin >> command >> x;
			if (!isStack && !isQueue && !isPQ) continue;
			if (command == 1)
			{
				st.push(x); q.push(x); pq.push(x);
			}
			else
			{
				if (st.empty()||st.top() != x) isStack = false;
				if (q.empty()||q.front() != x) isQueue = false;
				if (pq.empty()||pq.top() != x) isPQ = false;
				st.pop(); q.pop(); pq.pop();
			}
		}
		if (!isStack && !isQueue && !isPQ) cout << "impossible" << endl;
		else if (isStack && !isQueue && !isPQ) cout << "stack" << endl;
		else if (!isStack && isQueue && !isPQ) cout << "queue" << endl;
		else if (!isStack && !isQueue && isPQ) cout << "priority queue" << endl;
		else cout << "not sure" << endl;
	}
	return 0;
}
