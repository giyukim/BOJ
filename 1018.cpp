//https://www.acmicpc.net/problem/1018

#include <iostream>
#include <algorithm>

using namespace std;

char ipt[51][51];
char wfa[8][8] = { {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
				 {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
				 {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
				 {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
				 {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
				 {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
				 {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
				 {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'} };
char bfa[8][8] = { {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
				 {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
				 {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
				 {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
				 {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
				 {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
				 {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
				 {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'} };

int check(int a, int b) {
	int cntwf = 0;
	int cntbf = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (ipt[a + i][b + j] != wfa[i][j]) {
				cntwf++;
			}
		}
	}
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (ipt[a + i][b + j] != bfa[i][j]) {
				cntbf++;
			}
		}
	}
	return min(cntwf, cntbf);
}

int main()
{
	int n1 = 0, n2 = 0;
	int v1 = 0, v2 = 0;
	int m = 64;

	cin >> n1 >> n2;
	for (int i = 0; i < n1; i++)
		for (int j = 0; j < n2; j++)
			cin >> ipt[i][j];

	for (int i = 0; i <= n1 - 8; i++) {
		for (int j = 0; j <= n2 - 8; j++) {
			int a = check(i, j);
			if (m > a) m = a;
		}
	}
	
	cout << m;

	return 0;
}
