// Ä«µå2

#include <iostream>
#include <list>

using namespace std;

int main() {
	int n;

	cin >> n;

	list <int> arr;

	for (int i = 1; i <= n; i++) {
		arr.push_back(i);
	}
	int num;
	
	while (arr.size() != 1) {
		arr.erase(arr.begin());
		num = arr.front();
		arr.push_back(num);
		arr.erase(arr.begin());
	}

	cout << arr.front();

}