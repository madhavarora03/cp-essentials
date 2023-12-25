// friends_pairing_problem.cpp
#include<bits/stdc++.h>
using namespace std;
#define int long long

// n friends want to go to a party. They can either go single or paired up. Find number of ways

// dp optimization

int dp[100] = {0};
int friends_pair(int n) {
	if (n == 0 || n == 1) return dp[n] = 1;
	if (dp[n] != 0) return dp[n];
	return dp[n] = friends_pair(n - 1) + (n - 1) * friends_pair(n - 2);
}

int32_t main() {

	int n = 12;

	cout << friends_pair(n);

	return 0;
}