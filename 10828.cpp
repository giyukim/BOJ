#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
	int n = 0, intipt = 0;
	stack<int> stck;
	string ipt;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> ipt;
		if (ipt == "push") {
			intipt = 0;
			cin >> intipt;
			stck.push(intipt);
		}
		else if (ipt == "pop") {
			if (stck.empty())
				cout << "-1" << endl;
			else {
				cout << stck.top() << endl;
				stck.pop();
			}
		}
		else if (ipt == "size") {
			cout << stck.size() << endl;
		}
		else if (ipt == "empty") {
			if (stck.empty())
				cout << "1" << endl;
			else
				cout << "0" << endl;
		}
		else if (ipt == "top") {
			if (stck.empty())
				cout << "-1" << endl;
			else
				cout << stck.top() << endl;
		}
	}
	return 0;
}