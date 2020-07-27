//https://www.acmicpc.net/problem/2751

#include <iostream>
#include <algorithm>

using namespace std;

int ls[1000000] = { 0, };

int main()
{
	int N = 0;
	
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> ls[i];
	}

	sort(ls, ls + N);
	for (int i = 0; i < N; i++) {
		cout << ls[i] << " ";
	}

	return 0;
}