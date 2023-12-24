// recursion.cpp
#include<bits/stdc++.h>
using namespace std;

// Problem broken down into smaller problem of same type
// takes extra space due to implicit call stack

int fact(int n) {
	if (n == 0) return 1;
	return n * fact(n - 1);
}

int main() {

	int n = 5;
	cout << fact(n);

	return 0;
}