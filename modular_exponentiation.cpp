// binary_exponentiation.cpp
#include<bits/stdc++.h>
using namespace std;

#define int long long

const int mod = 1e9 + 7;

// O(log(b))

int powr(int a, int b) {
	int res = 1;
	while (b) {
		if (b & 1) res *= a, res %= mod;
		a *= a; a %= mod;
		b >>= 1;
	}
	return res;
}

int32_t main() {

	cout << powr(2, 200) << endl;
	return 0;
}