#include <stdio.h>

int N = 0;

void hanoinum(int n)
{
	int cnt = 1;
	for (int i = 1; i < n; i++) {
		cnt = cnt * 2 + 1;
	}
	printf("%d\n", cnt);
}

void hanoi(int n, int from, int to, int none)
{
	if (n == 1) {
		printf("%d %d\n", from, to);
	}
	else {
		hanoi(n - 1, from, none, to);
		hanoi(1, from, to, none);
		hanoi(n - 1, none, to, from);
	}
}

int main()
{
	scanf("%d", &N);

	hanoinum(N);
	hanoi(N, 1, 3, 2);

	return 0;
}