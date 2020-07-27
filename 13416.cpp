//https://www.acmicpc.net/problem/13416

#include <iostream>

using namespace std;

int main()
{
	int T = 0;
	int N = 0;
	int A, B, C;

	int value[1000] = { 0, };

	int arr = 0;
	
	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> N;
		for (int j = 0; j < N; j++) {
			cin >> A;
			cin >> B;
			cin >> C;
			if (A <= B) {
				arr = B;
			}
			else{
				arr = A;
			}
			if (arr <= C) {
				arr = C;
			}
			if (arr <= 0) {
				arr = 0;
			}
			value[i] += arr;
		}
	}

	for (int i = 0; i < T; i++) {
		cout << value[i] << endl;
	}

	return 0;
}