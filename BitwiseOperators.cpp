// BitwiseOperators.cpp
// 1. Operate on Binary representation of data
// 2. Fast
#include<bits/stdc++.h>
using namespace std;

// Number is odd or even
void oddEven(int n) {
	if (n & 1) {
		cout << "Odd\n";
	} else {
		cout << "Even\n";
	}
}

// get ith bit
int getithBit(int n, int i) {
	int mask = (1 << i);
	return (n & mask) > 0 ? 1 : 0;
}

void setithBit(int &n, int i) {
	int mask = (1 << i);
	n = (n | mask);
}

void clearithBit(int &n, int i) {
	int mask = ~(1 << i);
	n = (n & mask);
}

void updateithBit(int &n, int i, int v) {
	clearithBit(n, i);
	int mask = (v << i);
	n = (n | mask); // sets the right value
}

void clearLastiBits(int &n, int i) {
	int mask = (-1 << i);
	n = n & mask;
}

void clearBitsInRange(int &n, int i, int j) {
	int a = (-1 << j + 1);
	int b = (1 << i) - 1;
	int mask = a | b;

	n = n & mask;
}

int main() {

	int x = 0;
	cout << ~x << endl; // -1 ==> ~0 = 1111...1 (32 bits) -> 2's complement form for -ve no

	// left-shift -> a << b = a*(2^b)
	cout << (5 << 1) << endl; // 10

	// right-shift -> a >> b = a/(2^b)
	cout << (5 >> 1) << endl; // 2

	oddEven(5);
	oddEven(10);

	cout << getithBit(10, 3) << endl; //1010 --> 1

	cout << getithBit(10, 2) << endl; //1010 --> 0

	int n = 10;

	setithBit(n, 2); // 1110 == 14

	cout << n << endl;

	clearithBit(n, 2); // 1010 == 10

	cout << n << endl;

	updateithBit(n, 2, 1); // 1110 == 14

	cout << n << endl;

	updateithBit(n, 3, 0); //0110 == 6

	cout << n << endl;

	n = 15; // 1111

	clearLastiBits(n, 2); // 1100 == 12

	cout << n << endl;

	n = 31; // 11111

	clearBitsInRange(n, 1, 3); // 10001 == 17

	cout << n << endl;

	return 0;
}