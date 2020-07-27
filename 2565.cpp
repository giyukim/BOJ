//https://www.acmicpc.net/problem/2565

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n = 0, last = 0;
	vector<pair<int, int>> v;
	vector<int> v2;

	cin >> n;
	for (int i = 0; i < n; i++) {
		int a = 0, b = 0;
		cin >> a >> b;
		v.push_back(make_pair(a, b));
	}

	sort(v.begin(), v.end());

	v2.push_back(v[0].second);
	for (int i = 0; i < n; i++) {
		if (v2[v2.size()-1] > v[i].second) {
			vector<int>::iterator it = lower_bound(v2.begin(), v2.end(), v[i].second);
			v2[it - v2.begin()] = v[i].second;
		}
		else if (v2[v2.size()-1] < v[i].second) {
			v2.push_back(v[i].second);
		}
	}

	cout << n - v2.size();

	return 0;
}