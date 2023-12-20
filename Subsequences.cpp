// Subsequences.cpp
#include<bits/stdc++.h>
using namespace std;

void overlayNumber(string s, int num) {
	int j = 0;
	while (num) {
		int last_bit = (num & 1);
		if (last_bit) {
			cout << s[j];
		}
		j++;
		num >>= 1;
	}
	cout << endl;
}

void generateSubseq(string s) {
	int len = s.length();

	for (int i = 0; i < (1 << len); i++) {
		overlayNumber(s, i);
	}
}

int main() {

	string s;
	cin >> s;

	generateSubseq(s);

	return 0;
}