// Unique_2N_plus_2.cpp
#include<bits/stdc++.h>
using namespace std;
// 1 number is unique and others repeat 3 times

void updateSum(vector<int> &sumArr, int x) {
	for (int i = 0; i < 32; i++) {
		int ith_bit = x & (1 << i);
		if (ith_bit) {
			sumArr[i]++;
		}
	}
}

int numFromBits(vector<int>arr) {
	int num = 0;
	for (int i = 0; i < 32; i++) {
		num += (arr[i] * (1 << i));
	}
	return num;
}

// Target: cancel out bits of repeating numbers
int uniqueNumber3(vector<int>arr) {

	vector<int> sumArr(32, 0);

	for (int x : arr) {
		updateSum(sumArr, x);
	}

	for (int &x : sumArr) {
		x %= 3;
	}

	// An array of bits (0 or 1)

	return numFromBits(sumArr);
}

int main() {
	int n;
	cin >> n;

	vector<int>arr(n);

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	cout << uniqueNumber3(arr) << endl;

	return 0;
}