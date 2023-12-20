// Unique_2N_plus_2.cpp
#include<bits/stdc++.h>
using namespace std;
// 2 numbers are unique
void uniqueNumber2(vector<int>arr) {
	int n = arr.size();

	// 1. XOR
	int cum_xor = 0;

	for (int i = 0; i < n; i++) {
		cum_xor ^= arr[i];
	}

	// Position
	int pos = 0;

	int temp = cum_xor;

	while (!(temp & 1)) {
		pos++;
		temp >>= 1;
	}

	// Filter out numbers that have set bit at 'pos'
	int setA = 0;
	int setB = 0;
	int mask = (1 << pos);

	for (int i = 0; i < n; i++) {
		if (arr[i] & mask) {
			setA ^= arr[i];
		} else {
			setB ^= arr[i];
		}
	}
	cout << setA << " " << setB << endl;
}

int main() {
	int n;
	cin >> n;

	vector<int>arr(n);

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	uniqueNumber2(arr);

	return 0;
}