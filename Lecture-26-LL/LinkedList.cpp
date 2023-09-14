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

	node* head1, *tail1;
	head1 = tail1 = NULL;

	insertAtEnd(head, tail, 4);
	insertAtEnd(head, tail, 3);
	insertAtEnd(head, tail, 2);
	insertAtEnd(head, tail, 1);
	insertAtEnd(head, tail, 5);
	insertAtEnd(head, tail, 0);
	printLL(head);

	node* nH = mergeSort(head);
	printLL(nH);

	// insertAtEnd(head1, tail1, 2);
	// insertAtEnd(head1, tail1, 4);
	// insertAtEnd(head1, tail1, 5);
	// insertAtEnd(head1, tail1, 7);
	// printLL(head1);

	// head = mergeLL(head, head1);
	// printLL(head);


	// node* ans = midLL(head);
	// cout << "Middle " << ans->data << endl;


	return 0;
}


