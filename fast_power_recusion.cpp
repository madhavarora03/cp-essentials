// power_recusion.cpp
#include<bits/stdc++.h>
using namespace std;

// a^n = (a^(n/2))^2 => binary exponentiation

int powr(int a, int n) {
	if (n == 0) return 1;
	return a * powr(a, n - 1);
}

// O(logB)

int fast_powr(int a, int n) {
	if (n == 0) return 1;
	int subProb = fast_powr(a, n / 2);
	int subProbSq = subProb * subProb;

	if (n & 1) return a * subProbSq;
	return subProbSq;
}

int main() {

	cout << fast_powr(10, 2);

	return 0;
}