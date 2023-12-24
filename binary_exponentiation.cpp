// binary_exponentiation.cpp
#include<bits/stdc++.h>
using namespace std;

// O(log(b))

int powr(int a, int b) {
	int res = 1;
	while (b) {
		if (b & 1) res *= a;
		a *= a;
		b >>= 1;
	}
	return res;
}

int main() {

	cout << powr(5, 4) << endl;
	return 0;
}