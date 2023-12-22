#include <iostream>
#include <list> //  Doubly linked list
using namespace std;

int main() {

	list<int> l;
	// NULL <- 1 <-> 2 <-> 3 <-> NULL
	l.push_back(1);
	l.push_back(2);
	l.push_back(3);
	// NULL <-> 4 <-> 5 <-> 6 <-> 1 <-> 2 <-> 3 <-> NULL
	l.push_front(6);
	l.push_front(5);
	l.push_front(4);

	cout << "NULL <-> ";
	for (auto el : l) {
		cout << el << " <-> ";
	}
	cout << "NULL\n";

	// NULL <-> 4 <-> 5 <-> 6 <-> 1 <-> 2 <-> 3 <-> NULL
	// cout << "NULL <-> ";
	// for (list<int>::iterator it = l.begin(); it != l.end() ; it++) {
	// 	cout << *it << " <-> ";
	// }
	// cout << "NULL\n";


	return 0;
}
















