// Hashing

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int n;

	cin >> n;

	char* a = new char[n+1];

	cin >> a;
	
	unsigned long long sum = 0;

	for (int i = 0; i < n; i++) {
		long long k = static_cast<int>(a[i]) % 96;
		long long p = 1;
		
		for (int j = 0; j < i; j++) {
			p *= 31;
			p %= 1234567891;
		}

		sum += k * p;
	}

	sum %= 1234567891;


	cout << sum;
	delete[] a;
}