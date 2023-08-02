// solved.ac       답지 봄(시간 초과 문제)`

#include <iostream>
#include <cmath>

using namespace std;

void bubble_sort(int num, int a[]) {
	for (int i = 0; i < num - 1; i++) {
		for (int j = 0; j < num - 1 - i; j++) {
			if (a[j] > a[j + 1]) {
				int k = a[j];
				a[j] = a[j+1];
				a[j + 1] = k;
			}
		}
	}
}

int main() {
	int n;
	cin >> n;

	if (n == 0) {
		cout << 0;
		return 0;
	}

	int* a = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	bubble_sort(n, a)
		
		;

	double cut = (static_cast<double>(n) * 15) / 100;
	cut = floor(cut + 0.5);

	double sum = 0;

	for (int i = cut; i < n - cut; i++) {
		sum += a[i];
	}

	double avg = sum / (n - (2 * cut));
	avg = floor(avg + 0.5);

	cout << avg;

	delete[] a;

}
