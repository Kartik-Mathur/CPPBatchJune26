#include <iostream>
#include <queue>
using namespace std;

class node
{
public:
	int data;
	node* left, *right;
	node(int d) {
		data = d;
		left = right = NULL;
	}
};

node* InsertInBST(node* root, int data) {
	if (!root) {
		root = new node(data);
		return root;
	}

	if (data < root->data) {
		root->left = InsertInBST(root->left, data);
	}
	else {
		root->right = InsertInBST(root->right, data);
	}
	return root;
}

node* createBST() {
	// Yeh ek ek krke input lega aur InsertInBST ko dega
	node* root = NULL;
	int data;
	cin >> data;

	while (data != -1) {

		root = InsertInBST(root, data);

		cin >> data;
	}
	return root;
}

// Pre Order
void preorder(node* root) {
	if (!root) return;

	cout << root->data << " ";
	preorder(root->left);
	preorder(root->right);
}

// inorder
void inorder(node* root) {
	if (!root) return;

	inorder(root->left);
	cout << root->data << " ";
	inorder(root->right);
}

// post order
void postorder(node* root) {
	if (!root) return;

	postorder(root->left);
	postorder(root->right);
	cout << root->data << " ";
}

void printLevelOrder(node* root) {
	queue<node*> q;
	q.push(root);
	q.push(NULL);

	while (!q.empty()) {
		node* f = q.front();
		q.pop();

		if (f != NULL) {
			cout << f->data << " ";
			if (f->left) q.push(f->left);
			if (f->right) q.push(f->right);
		}
		else {
			cout << endl;
			if (!q.empty()) {
				q.push(NULL);
			}
		}
	}

}

void printRange(node* root, int k1, int k2) {
	if (!root) return;

	printRange(root->left, k1, k2);
	if (root->data >= k1 and root->data <= k2) cout << root->data << " ";
	printRange(root->right, k1, k2);
}

// Check Balanced Tree
class Pair {
public:
	int height;
	bool isBalanced;
	Pair() {
		height = 0;
		isBalanced = true;
	}
};

Pair isBalancedTree(node* root) {
	Pair p;
	// base case
	if (!root) {
		return p;
	}
	// recursive case
	Pair left = isBalancedTree(root->left);
	Pair right = isBalancedTree(root->right);

	p.height = max(left.height, right.height) + 1;
	if (abs(left.height - right.height) <= 1 and left.isBalanced and right.isBalanced)
		p.isBalanced = true;
	else p.isBalanced = false;

	return p;
}

// Sorted Array to Balanaced BST
node* arrayBalancedBST(int *a, int s, int e) {
	if (s > e) {
		return NULL;
	}

	// recursive case
	int m = (s + e) / 2;
	node* root = new node(a[m]);

	root->left = arrayBalancedBST(a, s, m - 1);
	root->right = arrayBalancedBST(a, m + 1, e);
	return root;
}


// BST to Sorted LL
class LinkedList {
public:
	node* head, *tail;
};

LinkedList BSTtoLL(node* root) {
	LinkedList l;
	// base case
	if (!root) {
		l.head = l.tail = NULL;
		return l;
	}
	// recursive case
	if (root->left and root->right) {
		LinkedList left = BSTtoLL(root->left);
		LinkedList right = BSTtoLL(root->right);
		left.tail->right = root;
		root->right = right.head;
		l.head = left.head;
		l.tail = right.tail;
		return l;
	}
	else if (root->left and !root->right) {
		LinkedList left = BSTtoLL(root->left);
		left.tail->right = root;
		l.head = left.head;
		l.tail = root;
		return l;
	}
	else if (!root->left and root->right) {
		LinkedList right = BSTtoLL(root->right);
		root->right = right.head;
		l.head = root;
		l.tail = right.tail;
		return l;
	}
	else { // !root->left and !root->right
		l.head = l.tail = root;
		return l;
	}
}

// 8 3 10 1 6 14 4 7 13 -1
int main() {

	int a[] = {1, 2, 3, 4, 5, 6};
	int n = sizeof(a) / sizeof(int);


	node* root = NULL;
	root = arrayBalancedBST(a, 0, n - 1);
	preorder(root);
	cout << endl;
	inorder(root);
	cout << endl;
	postorder(root);
	cout << endl;

	printLevelOrder(root);
	printRange(root, 7, 13);
	cout << endl;

	Pair ans = isBalancedTree(root);
	if (ans.isBalanced) cout << "Balanced hai\n";
	else cout << "Balanced nahi hai\n";

	cout << "Height: " << ans.height << endl;

	LinkedList l = BSTtoLL(root);
	node* head = l.head;
	while (head) {
		cout << head->data << "-->";
		head = head->right;
	}
	cout << "NULL\n";
	return 0;
}
















