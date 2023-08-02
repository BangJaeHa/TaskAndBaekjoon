// ÆÓ¸°µå·Ò ¼ö

#include <iostream>

using namespace std;

int main() {
	string s;

	cin >> s;

	bool penlid = 1;
	while (s[0] != '0') {
		if (s.length() == 1)
			cout << "yes" << endl;
		else {
			if (s.length() % 2 == 0) {
				for (int i = 0; i < s.length() / 2; i++) {
					if (s[i] != s[s.length() - i - 1])
						penlid = 0;
				}
			}
			else {
				for (int i = 0; i < (s.length() - 1) / 2; i++) {
					if (s[i] != s[s.length() - i - 1])
						penlid = 0;
				}
			}
			if (penlid)
				cout << "yes" << endl;
			else cout << "no" << endl;

		}

		

		penlid = 1;
		cin >> s;

	}
}