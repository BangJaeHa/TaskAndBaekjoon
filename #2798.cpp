// 블랙잭

#include <iostream>
#include <vector>

using namespace std;

int main() {
	long long n, m;

	cin >> n >> m;
	
	vector<int> card;

	for (int i = 0; i < n; i++) {
		long long num;
		cin >> num;
		card.push_back(num);
	}
	long long sum = 0;
	long long similarity = m;

	for (int i = 0; i < n-2; i++) {
		for (int j = i + 1; j < n-1; j++) {
			for (int k = j + 1; k < n; k++) {
				int tsum = card[i] + card[j] + card[k];
				if (tsum > m);
				else {
					int tsim = m - tsum;
					if (tsim < similarity) {
						similarity = tsim;
						sum = tsum;
					}
				}
				/*int tsum = card[i] + card[j] + card[k];
				if(m - tsum < similarity && m - tsum >= 0){                인터넷 코드
					similarity = m - tsum;
					sum = tsum;*/
			}
		}
	}
	cout << sum;
}