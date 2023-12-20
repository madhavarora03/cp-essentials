// Unique_2N_plus_1.cpp
#include<bits/stdc++.h>
using namespace std;

int uniqueNumber(vector<int>arr) {
	// a^b^a = b
	int ans = 0;
	for (int x : arr) {
		ans ^= x;
	}
	return ans;
}

int main() {
	int n;
	cin >> n;

	vector<int>arr(n);

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	cout << uniqueNumber(arr) << endl;

	return 0;
}