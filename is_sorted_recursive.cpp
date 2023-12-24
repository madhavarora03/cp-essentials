// is_sorted_recursive.cpp
#include<bits/stdc++.h>
using namespace std;

bool isSorted(int *arr, int n) {
	if (n == 1) return true;
	return (arr[0] < arr[1] && isSorted(arr + 1, n - 1));
}

int main() {
	int arr[] = {1, 3, 5, 7, 9, 10};

	cout << isSorted(arr, sizeof(arr) / sizeof(int));

	return 0;
}