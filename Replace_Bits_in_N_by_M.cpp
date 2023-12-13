// Replace_Bits_in_N_by_M.cpp

/*
-----------------------------------------------------------------------------
Q. You are given two 32-bit numbers, N and M, and two positions, i and j.
Write a method to set all bits between i and j in N equal to M.
M becomes a substring of N locationed at and starting at j

Example:
N = 1000000000;
M = 10101;
i=2,j=6;
Output: 1001010100
-----------------------------------------------------------------------------
*/

// Sol:
// 1. Clear Bits j to i in n
// 2. m = m << i
// 3. n = n | m
#include<bits/stdc++.h>
using namespace std;

void clearBitsInRange(int &n, int i, int j) {
	int a = (-1 << j + 1);
	int b = (1 << i) - 1;
	int mask = a | b;

	n = n & mask;
}

void replaceBits(int &n, int m, int i, int j) {
	clearBitsInRange(n, i, j);
	int mask = (m << i);
	n = n | mask;
}

int main() {

	int n = 15, i = 1, j = 3, m = 2;

	replaceBits(n, m, i, j); // 1111 --> 0001 --> 0101

	cout << n << endl;

	return 0;
}