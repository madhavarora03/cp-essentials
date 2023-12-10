#include<iostream>
#include<map>
using namespace std;

#define endl '\n'

int main() {

	// Ordered map --> optimized for storing key-value pairs ~ O(logN) time for insert, search, erase, update
	// Lexicographical ordering (acc. to keys)

	map<string, int> menu;

	// insert
	menu["Maggi"] = 15;
	menu["Cold Drink"] = 20;
	menu["Dosa"] = 99;
	menu["Pizza"] = 499;
	menu["Indian Platter"] = 399;

	// updation
	menu["Dosa"] += 0.1 * menu["Dosa"]; // 10% inc in price

	// erase
	menu.erase("Dosa");

	// searching
	string item;
	cin >> item;

	if (menu.count(item) == 0) {
		cout << item << " is not available!" << endl;
	} else {
		cout << item << " is available, and its cost is: " << menu[item] << endl;
	}

	// iterate over all key-value pairs
	cout << "--------------------\n\t\t\t\tMENU\n--------------------\n";
	for (pair<string, int> item : menu) {
		cout << item.first << " --> " << item.second << endl;
	}

	cout << "--------------------" << endl;

	// sorted output

	// eg: Phonebook : map<string, list<string> > phonebook; (or vector<string>)

	return 0;
}