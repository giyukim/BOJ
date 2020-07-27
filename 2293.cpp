//https://www.acmicpc.net/problem/2293

#include <iostream>

using namespace std;

int dp[10001];

int main()
{
	int n = 0, k = 0;
	int c[101] = { 0, };

	cin >> n >> k;
	for (int i = 1; i <= n; i++)
		cin >> c[i];

	dp[0] = 1;
	for (int i = 1; i <= k; i++) {
		if (i % c[1] == 0) {
			dp[i] = 1;
		}
	}
	
	for (int i = 2; i <= n; i++) {
		for (int j = 0; j <= k; j++) {
			if (c[i] <= j) {
				dp[j] += dp[j - c[i]];
			}
		}
	}

	cout << dp[k];

	return 0;
}