//https://www.acmicpc.net/problem/2515

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int dp[20000001] = { 0, };

bool sf(pair<int, int> a, pair<int, int> b) {
	if (a.first == b.first)
		return a.second > b.second;
	return a.first < b.first;
}

int main()
{
	int N = 0, S = 0;
	int M = 0;
	vector<pair<int, int>> v;

	cin >> N >> S;
	for (int i = 0; i < N; i++) {
		int n1, n2;
		cin >> n1 >> n2;
		v.push_back(make_pair(n1, n2));
	}

	sort(v.begin(), v.end(), sf);
	
	int idx = 0;
	for (int i = v[0].first; i <= v[N-1].first; i++) {
		dp[i] = dp[i - 1];
		if (i == v[idx].first) {
			dp[i] = max(dp[i - 1], dp[i - S] + v[idx].second);
			idx++;
		}
		while (idx < N && v[idx].first <= i) idx += 1;
	}

	cout << dp[v[idx - 1].first];

	return 0;
}