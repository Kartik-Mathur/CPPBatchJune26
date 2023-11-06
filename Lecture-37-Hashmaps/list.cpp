#include <iostream>
#include <list> // This will create doubly linkedList
// NULL <-- 1 <--> 2 <--> 3 <--> 4 --> NULL
using namespace std;

int main() {
	list <int> l;

	// Insertion in linkedList
	l.push_front(1);
	l.push_front(2);
	l.push_back(3);
	l.push_back(4);

	// Printing the linkedList
	cout << "NULL -- ";
	for (int d : l) {
		cout << d << " -- ";
	}
	cout << "NULL\n";

	// Iteration on Linkedlist using iterator
	// iterators are used to iterate over the containers
	// containers are nothing but I can say objects that we create
	// using STL.
	// list<int> :: iterator x;

	cout << "NULL -- ";
	for (auto x = l.begin() ; x != l.end() ; x++) {
		cout << *x << " -- ";
	}
	cout << "NULL\n";




	return 0;
}
















