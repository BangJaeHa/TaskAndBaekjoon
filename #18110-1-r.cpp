#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n;
	cin >> n;

	if (n == 0) {
		cout << 0;
		return 0;
	}


	vector<int> v(n);
	
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	sort(v.begin(), v.end());

	double cut = round((static_cast<double>(n) * 15) / 100);

	double sum = 0;

	for (int i = cut; i < n - cut; i++) {
		sum += v[i];
	}

	double avg = round(sum / (n - (2 * cut)));

	cout << avg;

}