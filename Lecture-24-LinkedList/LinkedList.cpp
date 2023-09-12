#include <iostream>
using namespace std;

class node {
public:
	int data;
	node* next;

	node(int d) {
		data = d;
		next = NULL;
	}
};

//////////////////////////// INSERTION IN LINKED LIST ///////////////////////////
void insertAtFront(node* &head, node* &tail, int data) {
	if (head == NULL) {
		// Linked list is empty
		node* n = new node(data);
		head = tail = n;
	}
	else {
		node* n = new node(data);
		n->next = head;
		head = n;
	}
}

void insertAtEnd() {}

void insertAtMiddle() {}
//////////////////////////// @INSERTION IN LINKED LIST ///////////////////////////


// PRINT THE LIST
void printLL(node* temp) {
	while (temp != NULL) {
		cout << temp->data << "-->";
		temp = temp->next;
	}
	cout << "NULL\n";
}

int main() {

	node* head, *tail;
	// Pointers mei garbage nahi rakhte
	head = tail = NULL;

	insertAtFront(head, tail, 1);
	insertAtFront(head, tail, 2);
	insertAtFront(head, tail, 3);

	printLL(head);
	printLL(head);
	printLL(head);


	return 0;
}
















