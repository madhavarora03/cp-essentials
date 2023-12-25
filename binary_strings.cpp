// binary_strings.cpp
#include<bits/stdc++.h>
using namespace std;

// Count no of binary strings of size n with no consecutive 1's

int dp[100] = {0};

int cnt_str(int n) {
	if (n == 0 || n == 1) return dp[n] = n + 1;
	if (dp[n] != 0) return dp[n];
	return dp[n] = cnt_str(n - 1) + cnt_str(n - 2);
}

int main() {

	int n;
	cin >> n;

	cout << cnt_str(n);

	return 0;
}