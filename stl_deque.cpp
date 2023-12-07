#include<iostream>
#include<deque> // doubly-ended queue --> front and back ~ sliding window for both sides!
using namespace std;

#define endl '\n'

void print(deque<int> dq) {
	for (int x : dq) {
		cout << x << " ";
	}
	cout << endl;
}

int main() {
	// empty deque
	deque<int> first;
	// fill
	deque<int> second(4, 100); // <--[100, 100, 100, 100]-->
	// iterating through second deque
	deque<int> third(second.begin(), second.end());
	// copy
	deque<int> fourth(third);
	// init
	deque<int> fifth = {1, 2, 3, 4, 5};
	// [] or at() method --> get the ith element of the deque
	cout << second[3] << endl;

	// push_front, push_back, pop_front, pop_back
	deque<int>dq;

	cout << "------------------------------\nSeries of operations on deque\n------------------------------\n";
	dq.push_back(3);
	print(dq);

	dq.push_back(4);
	print(dq);

	dq.push_back(1);
	print(dq);

	dq.push_back(2);
	print(dq);

	dq.push_back(5);
	print(dq);

	dq.pop_back();
	print(dq);

	dq.pop_back();
	print(dq);

	dq.push_front(9);
	print(dq);

	dq.push_front(7);
	print(dq);

	dq.pop_front();
	print(dq);

	cout << "------------------------------\n";

	return 0;
}