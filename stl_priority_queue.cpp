#include<iostream>
#include<queue>
using namespace std;

#define endl "\n"

class Compare {
public:
	bool operator()(int a, int b) {
		return a > b; // a < b will give the reverse order (max heap)!
	}
};

int main() {
	// priority queue ~ heap
	int arr[] = {10, 15, 20, 13, 6, 90};
	int n = sizeof(arr) / sizeof(int);

	// By default a max heap is made
	priority_queue<int> heap;

	for (auto x : arr) {
		heap.push(x);
	}

	// Heap in sorted order (descending)
	while (!heap.empty()) {
		cout << heap.top() << " ";
		heap.pop();
	}
	cout << endl;
	// For min heap:
	priority_queue <int, vector<int>, greater<int>>pq; // greater<int> is an inbuilt comparator. If there is an complex object, we can make our own comparators too!

	for (auto x : arr) {
		pq.push(x);
	}

	// Heap in sorted order
	while (!pq.empty()) {
		cout << pq.top() << " ";
		pq.pop();
	}

	// Using custom comparator:
	priority_queue <int, vector<int>, Compare> custom_pq;

	cout << endl << "Using custom comparator: ";

	for (auto x : arr) {
		custom_pq.push(x);
	}

	// Heap in sorted order
	while (!custom_pq.empty()) {
		cout << custom_pq.top() << " ";
		custom_pq.pop();
	}

	return 0;
}