#include<iostream>
#include<array>
#include<algorithm>
using namespace std;

#define endl '\n'

// Not passed by reference --> a copy of the array gets created, unlike normal arrays, where a copy of the pointer of base address gets made => any change changes it at the memory location in a normal array (copy pointer still points to the correct location: int arr[] <=> int *arr). To avoid this, pass STL array by reference (&arr), and henc, a copy will not be created.
void updateArray(array<int, 6> arr, int i, int val) {
	arr[i] = val;
}

// Array object passed by reference, now the value actually gets updated
void updateArrayRef(array<int, 6> &arr, int i, int val) {
	arr[i] = val;
}

// const => for read only data members
void print(const array<int, 6> &arr) {
	// Here arr.size() works as we pass the object itself, not a pointer. In the traditional approach, we would also have had to pass the array size as a parameter, otherwise inside the function it would have given the size of the pointer instead!
	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << " ";
	}

	cout << endl;
}

int main() {

	array<int, 6> arr = {1, 7, 3, 2, 4, 6};

	// arr[0] = 10;
	updateArray(arr, 0, 100); // array is not updated --> array is an object (STL Container); it is passed by value

	cout << "Passed by value (no change): ";
	print(arr);

	updateArrayRef(arr, 0, 100);

	cout << endl << "Passed by reference: ";
	print(arr);

	// Sort
	sort(arr.begin(), arr.end());

	cout << endl << "Sorted array: ";
	print(arr);

	// Fill
	array<int, 10> fives;
	fives.fill(5);

	cout << endl << "Array of fives: ";

	for (int i = 0; i < fives.size(); i++) {
		cout << fives[i] << " ";
	}

	// for-each loop
	cout << endl << "Using the for-each loop: ";
	for (int x : arr) {
		cout << x << " ";
	}

	cout << endl << endl;

	// front and back
	cout << "First element: " << arr.front() << endl; // first element
	cout << "Last element: " << arr.back() << endl; // last element

	// arr.at(i); //element at ith index

	return 0;
}