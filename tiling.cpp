// tiling.cpp
// Given a (4 X N) board, find no. of ways to tile it using (4 X 1) tiles
// A tile can be placed horizontally (4 X 1) or vertically (1 X 4)

#include<bits/stdc++.h>
using namespace std;
// dp optimization -->

int dp[100] = {0};

int tile(int n) {
	if (n <= 3) return dp[n] = 1;
	if (dp[n] != 0) return dp[n];
	return tile(n - 1) + tile(n - 4);
}

int main() {

	int n;
	cin >> n;

	cout << tile(n);

	return 0;
}