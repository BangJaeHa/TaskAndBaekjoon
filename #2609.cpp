// 최대공약수와 최소공배수

#include <iostream>

using namespace std;

int gcd(int a, int b) {
	if (b == 0) return a;
	else return gcd(b, a % b);
}

int main() {
	int a, b;

	cin >> a >> b;

	int gc, lc;

	gc = gcd(a, b);

	lc = (a * b) / gc;

	cout << gc << endl << lc;
}