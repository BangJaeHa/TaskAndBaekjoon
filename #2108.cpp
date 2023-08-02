// Åë°èÇĞ

#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
	int n;
	cin >> n;

	double sum = 0;

	int arr[4001]{ 0 };

	vector<int> numbers;

	for (int i = 0; i < n; i++) {
		int p;
		cin >> p;
		arr[p]++;
		sum += p;
		numbers.push_back(p);
	}

	double avg = sum / n;

	sort(numbers.begin(), numbers.end());

	
	
}