#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main()
{
	int n = 0, intipt = 0;
	queue<int> q;
	string ipt;
	
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> ipt;
		if (ipt == "push") {
			intipt = 0;
			cin >> intipt;
			q.push(intipt);
		}
		else if (ipt == "pop") {
			if (q.empty())
				cout << "-1" << endl;
			else {
				cout << q.front() << endl;
				q.pop();
			}
		}
		else if (ipt == "size") {
			cout << q.size() << endl;
		}
		else if (ipt == "empty") {
			if (q.empty())
				cout << "1" << endl;
			else
				cout << "0" << endl;
		}
		else if (ipt == "front") {
			if (q.empty())
				cout << "-1" << endl;
			else
				cout << q.front() << endl;
		}
		else if (ipt == "back") {
			if (q.empty())
				cout << "-1" << endl;
			else
				cout << q.back() << endl;
		}
	}

	return 0;
}