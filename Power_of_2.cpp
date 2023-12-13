// Power_of_2.cpp
// Check if n is a power of 2

#include<bits/stdc++.h>
using namespace std;

int main() {

	int n;
	cin >> n;

	// Property --> If n is a power of 2, then (n & (n-1)) = 0

	if ((n & (n - 1)) == 0) {
		cout << "Power of 2" << endl;
	} else {
		cout << "Not a Power of 2" << endl;
	}

	return 0;
}