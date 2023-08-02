// 팩토리얼 0의 개수



























/* 인터넷 코드
#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int count = 0;

	for (int i = 1; i <= n; i++) {
		if (i % 5 == 0) count++;
		if (i % 25 == 0) count++;
		if (i % 125 == 0) count++;
	}

	cout << count;
	
}
*/