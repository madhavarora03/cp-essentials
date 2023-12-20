// big_integers.cpp
#include<bits/stdc++.h>
using namespace std;

// Nos are very big --> do not fit in long long int
// Use arrays or strings

char digitToChar(int digit) {
	return digit + '0';
}

int charToDigit(char ch) {
	return ch - '0';
}

// Addition:

string addNumbers(string n1, string n2) {

	if (n1.length() > n2.length()) swap(n1, n2);

	string res = "";

	// reverse numbers
	reverse(n1.begin(), n1.end());
	reverse(n2.begin(), n2.end());

	// add n1.length() digits
	int carry = 0;

	for (int i = 0; i < n1.length(); i++) {
		int dig1 = charToDigit(n1[i]);
		int dig2 = charToDigit(n2[i]);
		int sum = dig1 + dig2 + carry;
		int output_digit = sum % 10;
		carry = sum / 10;
		res.push_back(digitToChar(output_digit));
	}

	for (int i = n1.length(); i < n2.length(); i++) {
		int dig2 = charToDigit(n2[i]);
		int sum = dig2 + carry;
		int output_digit = sum % 10;
		carry = sum / 10;
		res.push_back(digitToChar(output_digit));
	}

	if (carry != 0) {
		res.push_back(digitToChar(carry));
	}

	reverse(res.begin(), res.end());

	return res;

}

int main() {

	// strings

	string s1, s2;

	cin >> s1 >> s2;

	string res = addNumbers(s1, s2);

	cout << res << endl;

	return 0;
}