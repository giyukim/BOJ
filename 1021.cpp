//https://www.acmicpc.net/problem/1021

#include <iostream>
#include <deque>

using namespace std;

int main()
{
	int N = 0, M = 0, n[50] = { 0, }, cnt = 0;
	deque<int> dq;

	cin >> N >> M;
	for (int i = 0; i < M; i++) {
		cin >> n[i];
	}
	
	for (int i = 1; i <= N; i++)
		dq.push_back(i);

	for (int i = 0; i < M; i++){
		if (dq.front() == n[i]) {
			dq.pop_front();
		}
		else {
			int j = 0;
			for (j = 0; j < dq.size(); j++) {
				if (n[i] == dq[j]) break;
			}
			int f = dq.size() - j;
			int b = dq.size() - f;
			if (f >= b) {
				while (1) {
					int arr = dq.front();
					dq.push_back(arr);
					dq.pop_front();
					if (dq.front() == n[i]) {
						break;
					}
				}
				dq.pop_front();
				cnt += b;
			}
			else if (f < b) {
				while (1) {
					int arr = dq.back();
					dq.push_front(arr);
					dq.pop_back();
					if (dq.front() == n[i]) {
						break;
					}
				}
				dq.pop_front();
				cnt += f;
			}
		}
		
	}

	cout << cnt;

	return 0;
}