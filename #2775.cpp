// 부녀회장이 될테야

#include <iostream>

using namespace std;

int main() {
	int n = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int floor, room;


	}
}


/*
	int n;

	cin >> n;

	long long arr[14][14];
	int j = 1;

	for (int i = 0; i < 14; i++) {
		for (; j <= 14; j++) {
			if (i == 0) arr[i][j-1] = j;
			else {
				int num = 0;
				for (int k = 0; k < j; k++) {
					num += arr[i - 1][k];
				}
				arr[i][j-1] = num;
			}
		}
		j = 1;
	}

	for (int i = 0; i < n; i++) {
		int floor, room;
		cin >> floor >> room;

		cout << arr[floor][room-1];
	}
*/