#include<iostream>
using namespace std;
class node {
public:
	int data;
	node* next;
};
int main() {
	node a;
	node b;
	a.data = 10;
	a.next = &b;
	b.data = 20;
	b.next = NULL;
	cout << "using dereference " << (*a.next).data << endl;
	cout << a.data << " ," << b.data << endl;
	//print b data without using b.data
	cout << a.next->data << endl;
	// cout << b.next->data << endl;
	return 0;
}