#include <iostream>
using namespace std;

class node {
public:
	int data;
	node* next;
};


int main() {

	node a;
	node b, c;

	a.data = 1;
	b.data = 2;
	c.data = 3;

	a.next = &b;
	b.next = &c;
	c.next = NULL;

	// Print the linked list
	// cout << a.data << "-->" << a.next->data << "-->" << a.next->next->data << "-->" << "NULL\n";
	cout << a.data << "-->" << (*a.next).data << "-->" << a.next->next->data <<
	     "-->" << "NULL\n";

	return 0;
}
















