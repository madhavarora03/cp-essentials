// binary_exponentiation.cpp
#include<bits/stdc++.h>
using namespace std;

#define int long long

const int mod = 1e9 + 7;

// O(log(b))

int multiply(int a, int b) {
	int res = 0;
	while (b) {
		if (b & 1) res += a, res %= mod;
		a += a; a %= mod;
		b >>= 1;
	}
	return res;
}

int32_t main() {

	cout << multiply(2, 20) << endl;
	return 0;
}