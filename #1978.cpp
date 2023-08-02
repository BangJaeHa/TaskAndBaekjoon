// 소수 찾기

#include <iostream>

using namespace std;

int main() {
	int n;

	cin >> n;
	int result = 0;

	for (int i = 0; i < n; i++) {
		int num;
		int fcount = 0;

		cin >> num;
		
		if (num == 1)
			continue;

		for (int j = 2; j < num; j++) {
			if (num % j == 0) {
				fcount++;
			}
		}

		if (fcount == 0)
			result++;
	}

	cout << result;
}