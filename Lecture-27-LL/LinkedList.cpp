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
//////////////////////////// @INSERTION IN LINKED LIST ///////////////////////////



//////////////////////////// MIDDLE OF LINKED LIST ///////////////////////////////
node* midLL(node* head) {
	if (head == NULL || head->next == NULL) {
		return head;
	}

	node* slow = head;
	node* fast = head->next;

	while (fast != NULL and fast->next != NULL) {
		fast = fast->next->next;
		slow = slow->next;
	}

	return slow;
}
//////////////////////////// @MIDDLE OF LINKED LIST ///////////////////////////////


//////////////////////////// MERGE TWO SORTED LINKED LIST /////////////////////////////
node* mergeLL(node* a, node* b) {
	if (!a) {
		return b;
	}
	if (!b) {
		return a;
	}

	node* nH;
	if (a->data < b->data) {
		nH = a;
		nH->next = mergeLL(a->next, b);
	}
	else {
		nH = b;
		nH->next = mergeLL(a, b->next);
	}
	return nH;
}
//////////////////////////// @MERGE TWO SORTED LINKED LIST /////////////////////////////


//////////////////////////// MERGE-SORT LINKED LIST //////////////////////////////
node* mergeSort(node* head) {
	// base case
	if (!head || !head->next) {
		return head;
	}

	// recursive case
	// 1. Divide
	node* m = midLL(head);
	node* a = head;
	node* b = m->next;
	m->next = NULL;
	// 2. Sort
	a = mergeSort(a);
	b = mergeSort(b);
	// 3. Merge
	node* nH = mergeLL(a, b);
	return nH;
}
//////////////////////////// @MERGE-SORT LINKED LIST //////////////////////////////

//////////////////////////// BUBBLE-SORT LINKED LIST //////////////////////////////
void bubbleSortLL(node* &head) {
	int n = lenghtLL(head);
	for (int i = 0; i < n - 1; ++i)
	{
		node* c = head, *p = NULL;
		node* n;

		while (c != NULL and c->next != NULL) {
			n = c->next;
			if (c->data > n->data) {
				// swapping hogi
				if (p == NULL) {
					// head change hoga
					c->next = n->next;
					n->next = c;
					head = p = n;
				}
				else {
					// head change nhi hoga
					p->next = n;
					c->next = n->next;
					n->next = c;
					p = n;
				}
			}
			else {
				// swapping nahi hogi
				p = c;
				c = n;
			}
		}
	}
}
//////////////////////////// @BUBBLE-SORT LINKED LIST //////////////////////////////

void breakCycle(node* head, node* fast) {
	node* slow = head;
	node* p = head;

	while (p->next != fast) {
		p = p -> next;
	}

	while (fast != slow) {
		p = fast;
		fast = fast->next;
		slow = slow->next;
	}

	p->next = NULL;
}

bool isCyclic(node* head) { // Floyd's Cycle Detection Algorithm
	node* fast = head, *slow = head;
	while (fast and fast->next) {
		fast = fast->next->next;
		slow = slow->next;

		if (fast == slow) {
			breakCycle(head, slow);
			return true;
		}
	}

	return false;
}


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
	head = tail = NULL;


	insertAtEnd(head, tail, 1);
	insertAtEnd(head, tail, 2);
	insertAtEnd(head, tail, 3);
	insertAtEnd(head, tail, 4);
	insertAtEnd(head, tail, 5);
	insertAtEnd(head, tail, 6);
	insertAtEnd(head, tail, 7);
	insertAtEnd(head, tail, 8);
	insertAtEnd(head, tail, 9);
	insertAtEnd(head, tail, 18);
	insertAtEnd(head, tail, 22);
	insertAtEnd(head, tail, 80);
	// printLL(head);
	tail->next =  head->next->next->next->next;

	if (isCyclic(head)) {
		cout << "Cycle Hai\n";
	}
	else {
		cout << "Cycle nhi h\n";
	}

	printLL(head);
	// node* nH = mergeSort(head);
	// printLL(nH);


	return 0;
}


