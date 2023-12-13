// Count_Set_bits.cpp
#include<bits/stdc++.h>
using namespace std;

int countSetBits(int n) {
	// Time complexity --> O(logN)
	int cnt = 0;
	while (n) {
		cnt += (n & 1);
		n >>= 1;
	}
	return cnt;
}

// Counting Set Bits : Hack!
int countBitsHack(int n) {
	// Time complexity --> O(k); k = no. of set bits
	int ans = 0;
	while (n) {
		// removes last set bit from number
		n = (n & (n - 1));
		ans++;
	}
	return ans;
}

int main() {
	int n;
	cin >> n;

	cout << countSetBits(n) << endl;

	cout << countBitsHack(n) << endl;

	return 0;
}