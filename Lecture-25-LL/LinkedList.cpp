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

/////////////////////////// LENGTH OF LL /////////////////////////////////////////
int lenghtLL(node* head) {
	int ans = 0;
	while (head != NULL) {
		ans++;
		head = head	-> next;
	}
	return ans;
}
/////////////////////////// LENGTH OF LL /////////////////////////////////////////


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

void insertAtEnd(node* &head, node* &tail, int data) {
	if (head == NULL) {
		node* n = new node(data);
		head = tail = n;
	}
	else {
		node* n = new node(data);
		tail->next = n;
		tail = n;
	}
}

void insertAtMiddle(node* &head, node* &tail, int pos, int data) {
	if (pos == 0) {
		insertAtFront(head, tail, data);
	}
	else if (pos >= lenghtLL(head)) {
		insertAtEnd(head, tail, data);
	}
	else {
		node* t = head;
		for (int i = 1; i <= pos - 1; ++i)
		{
			t = t->next;
		}

		node* n = new node(data);
		n->next = t->next;
		t->next = n;
	}
}
//////////////////////////// @INSERTION IN LINKED LIST ///////////////////////////

//////////////////////////// DELETION IN LINKED LIST ///////////////////////////
void deleteAtFront(node* &head, node* &tail) {
	if (!head) {
		// cout << "Khaali Peeli kya ungli kar rha hai\n";
		return;
	}
	else if (!head->next) {
		delete head;
		head = tail = NULL;
	}
	else {
		node* t = head;
		head = head	->next;
		delete t;
	}
}

void deleteAtEnd(node* &head, node*& tail) {
	if (!head) {
		return;
	}
	else if (!head->next) {
		delete head;
		head = tail = NULL;
	}
	else {
		node* t = head;
		while (t->next != tail) {
			t = t->next;
		}
		delete tail;
		tail = t;
		tail->next = NULL;
	}
}

void deleteAtMiddle(node* &head, node* &tail, int pos) {
	if (pos == 0) {
		deleteAtFront(head, tail);
	}
	else if (pos >= lenghtLL(head) - 1) {
		deleteAtEnd(head, tail);
	}
	else {
		node* t = head;
		for (int i = 1; i <= pos - 1; ++i)
		{
			t = t->next;
		}

		node* n = t->next;
		t->next = n->next;
		delete n;
	}
}
//////////////////////////// @DELETION IN LINKED LIST ///////////////////////////



//////////////////////////// REVERSE A Linked LIST //////////////////////////////
void reverseLL(node* &head, node* &tail) {
	node* c = head;
	node* p = NULL;
	node* n;

	while (c != NULL) {
		n = c ->next;
		c->next = p;

		p = c;
		c = n;
	}

	swap(head, tail);
}
//////////////////////////// @REVERSE A Linked LIST //////////////////////////////




//////////////////////////// REVERSE A Linked LIST-Recursion /////////////////////
void reverseLLRecHelper(node* c, node* p = NULL) {
	// Base case
	if (c == NULL) {
		return;
	}

	// Recursive case
	node* n = c->next;
	c->next = p;
	reverseLLRecHelper(n, c);
}


void reverseLLRec(node* &head, node* &tail) {
	reverseLLRecHelper(head);
	swap(head, tail);
}
//////////////////////////// @REVERSE A Linked LIST-Recursion /////////////////////



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
	insertAtEnd(head, tail, 4);
	insertAtEnd(head, tail, 5);
	insertAtEnd(head, tail, 6);
	printLL(head);

	insertAtMiddle(head, tail, 0, 22);

	printLL(head);
	// cout << "Length : " << lenghtLL(head) << endl;

	// deleteAtFront(head, tail);
	// deleteAtEnd(head, tail);
	// deleteAtMiddle(head, tail, 3);
	reverseLLRec(head, tail);
	printLL(head);


	return 0;
}
















