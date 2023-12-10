#include<iostream>
#include <unordered_set>
using namespace std;

int main() {
	// set is just a collection of keys
	// unordered set --> O(1) time, works on hashing

	unordered_set<int> s{1, 2, 3, 8, 11, 15, 0};

	int key;
	cin >> key;

	// s.end() -> an iterator for end of set (after the last element)
	if (s.find(key) != s.end()) {
		cout << key << " is present";
	} else {
		cout << key << " not found";
	}

	cout << endl;

	// erase
	s.erase(11);

	// insert
	s.insert(111);

	// print
	for (int x : s) {
		cout << x << " ";
	}
	cout << endl;

	return 0;
}