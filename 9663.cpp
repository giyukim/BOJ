#include <iostream>

using namespace std;

int r = 0;
int b[15] = { 0, };

int check(int a)
{
	for (int j = 0; j < a; j++) {
		if (b[a] == b[j] || abs(a - j) == abs(b[a] - b[j])) {
			return false;
		}
	}
	return true;
}

void q(int a, int N)
{
	if (a == N) {
		r += 1;
		return;
	}
	for (int i = 0; i < N; i++) {
		b[a] = i;
		if (check(a)) {
			q(a + 1, N);
		}
		b[a] = 0;
	}
}

int main()
{
	int N = 0;
	cin >> N;

	q(0, N);
	cout << r;

	return 0;
}