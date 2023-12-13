// Decimal_to_Binary.cpp
#include<bits/stdc++.h>
using namespace std;

int convertToBinary(int n) {
	int ans = 0;
	int p = 1;

	while (n != 0) {
		ans += (n & 1) * p;

		p *= 10;
		n >>= 1;
	}
	return ans;
}

int main() {

	int n;
	cin >> n;

	cout << convertToBinary(n) << endl;

	return 0;
}