// 요세푸스 문제0         큐 공부 중 의도치 않게 인터넷의 도움을 빌림

#include <iostream>
#include <queue>

using namespace std;

int main() {
	int n, k;

	cin >> n >> k;

	queue<int> q;

	for (int i = 0; i < n; i++) {
		q.push(i + 1);
	}

	cout << "<";
	
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < k-1; j++) {
			q.push(q.front());
			q.pop();
		}
		cout << q.front() << ", ";
		q.pop();
	}

	cout << q.front() << ">";
}