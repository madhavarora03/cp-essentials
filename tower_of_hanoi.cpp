// tower_of_hanoi.cpp
#include<bits/stdc++.h>
using namespace std;

void hanoi(int n, string src, string helper, string dest) {
	if (n == 0) return;
	hanoi(n - 1, src, dest, helper);
	cout << "Move disc " << n << " from " << src << " to " << dest << endl;
	hanoi(n - 1, helper, src, dest);
}

int main() {

	// exactly 2^N-1 steps
	int n;
	cin >> n;
	hanoi(n, "a", "b", "c");

	return 0;
}