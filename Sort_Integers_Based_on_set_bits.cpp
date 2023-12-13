// Sort_Integers_Based_on_set_bits.cpp

#include<bits/stdc++.h>
using namespace std;

bool cmp(int &a, int &b) {
	int setA = __builtin_popcount(a);  // Count of 1 bits in a
	int setB = __builtin_popcount(b);  // Count of 1 bits in b

	if (setA == setB) {
		return a < b;   // Sort by actual value if number of 1 bits is the same
	}
	return setA < setB;  // Sort by number of 1 bits otherwise
}

vector<int> sortByBits(vector<int> arr) {
	sort(arr.begin(), arr.end(), cmp);  // Sort using custom comparator
	return arr;
}