// 프린터 큐

// 우선순위 큐를 공부하고 시도해야함

#include <iostream>
#include <queue>

using namespace std;

int main() {
	int num;

	cin >> num;

	for (int i = 0; i < num; i++) {
		bool flag = 1;
		int n, m, target;
		cin >> n >> m;

		queue<int> priority;

		for (int j = 0; j < n; j++) {
			int p;
			cin >> p;
			if (j == m) {
				priority.push(0);
				target = p;
			}
			else
				priority.push(p);

		}

		int out = 0;
		
			for (int j = 9; j > 0; j--) {
				if (flag) {
				for (int x = 0; x < priority.size(); x++) {
					if (priority.front() == j) {
						out++;
						priority.pop();


						queue<int> test = priority;
						test.pop();
						for (int k = 0; k < test.size(); k++) {
							if (test.front() == j) {

							}

						}
					}

					else if (priority.front() == 0) {
						bool zero = 1;

						queue<int> test = priority;

						test.pop();

						for (int k = 0; k < test.size(); k++) {
							if (test.front() >= target) {
								zero = 0;
								break;
							}
							else {
								test.pop();
							}
						}

						if (zero) {
							out++;
							flag = 0;
							break;
						}
						else {
							priority.push(priority.front());
							priority.pop();
						}
					}

					else {
						priority.push(priority.front());
						priority.pop();
					}
				}
			}
		}

		cout << out << endl;
	}
}