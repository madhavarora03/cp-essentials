#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

#define endl '\n'

// Dynamic arrays with the ability to resize itself automatically when an element is inserted

void print(vector<int>arr) {
	cout << "[";
	for (int x : arr) {
		cout << x << ' ';
	}
	cout << "]" << endl;
}

int main() {

	// Empty container constructor
	vector<int> first;

	// Fill constructor
	vector<int> second(4, 20);

	// Range constructor
	int nums[] = {1, 2, 3, 5, 4, 2, 2};
	vector<int> third(nums, nums + 4);

	// Copy constructor
	vector<int> fourth(third);

	// Init List
	vector<int> fifth = {1, 2, 3, 5, 4};

	// push_back, pop_back --> O(1), linear if re-allocation happens
	vector<int> arr = {1, 3, 2, 4};
	arr.push_back(5);
	print(arr);
	arr.pop_back();
	print(arr);

	// clear --> makes size 0 (size!=capacity)
	arr.clear();
	cout << "------\n";
	print(arr);
	cout << "Size: " << arr.size() << endl << "Capacity: " << arr.capacity() << endl << "------" << endl;

	// insert
	arr.insert(arr.begin(), fifth.begin(), fifth.end());
	print(arr);

	// erase --> clear a range
	arr.erase(arr.begin(), arr.begin() + 3);
	print(arr);

	// Sorting
	sort(arr.begin(), arr.end());
	cout << "Sorted Vector: ";
	print(arr);

	return 0;
}