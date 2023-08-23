#include<iostream>

using namespace std;

int main() {
	int n, k;
	cin >> n >> k;

	// 1 2 3
	// 3 2 1 k = 2
	// 1 3 2 k = 1
	// 1 2 3 k = 0

	k = n - k - 1;
	for (int i = 1; i <= k; i++) cout << i << ' ';

	for (int i = n; i > k; i--) cout << i << ' ';
}
