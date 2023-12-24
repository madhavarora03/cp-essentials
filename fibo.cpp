// fibo.cpp
#include<bits/stdc++.h>
using namespace std;

// ~O(2^N)
int fibo(int n) {
	if (n == 0 || n == 1) return n;
	return fibo(n - 1) + fibo(n - 2);
}

int main() {
	int n = 10;
	for (int i = 0; i <= n; i++) cout << fibo(i) << ' ';
	return 0;
}