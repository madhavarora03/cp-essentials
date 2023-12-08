#include<iostream>
#include<stack>
using namespace std;

int main() {
	// LIFO Data Structure
	stack<string>books;

	books.push("C++");
	books.push("Java");
	books.push("Python");
	books.push("OS");

	while (!books.empty()) {
		cout << books.top() << " | ";
		books.pop();
	}

	// Order is reverse of the pushing order!

	return 0;
}