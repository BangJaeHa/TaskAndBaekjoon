// Á÷°¢»ï°¢Çü

#include <iostream>

using namespace std;

void max_swap(long long& a, long long& b, long long& c) {
	long long tmp_a = a;
	long long tmp_b = b;

	if (a > b) {
		b = a;
		a = tmp_b;
		if (b > c) {
			b = c;
			c = tmp_a;
		}
	}
	else if (a > c) {
		c = b;
		b = a;
		c = tmp_a;
	}
	else if (b > c) {
		b = c;
		c = tmp_b;
	}

}

int main() {
	while (1) {
		long long a, b, c;

		cin >> a >> b >> c;

		if (a == 0 && b == 0 && c == 0)
			break;
		else {
			max_swap(a, b, c);
			if (c * c == a * a + b * b)
				cout << "right" << endl;
			else
				cout << "wrong" << endl;
		}
	}
}