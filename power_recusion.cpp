// power_recusion.cpp
#include<bits/stdc++.h>
using namespace std;

int powr(int a, int n) {
	if (n == 0) return 1;
	return a * powr(a, n - 1);
}

int main() {

	cout << powr(10, 2);

	return 0;
}