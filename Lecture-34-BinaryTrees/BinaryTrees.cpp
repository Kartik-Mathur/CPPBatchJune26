#include <iostream>
#include <queue>
using namespace std;

class node {
public:
	int data;
	node* left, *right;
	node(int d) {
		data = d;
		left = right = NULL;
	}
};

node* buildTree() {
	int data;
	cin >> data;

	if (data == -1) return NULL;

	node* root = new node(data);
	root->left = buildTree();
	root->right = buildTree();
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

int countNodes(node* root) {

	return (!root) ? 0 : countNodes(root->left) + countNodes(root->right) + 1;
}


int height(node* root) {
	return (!root) ? 0 : max(height(root->left), height(root->right)) + 1;
}

int diameter(node* root) {
	if (!root) return 0;

	int op1 = height(root->left) + height(root->right);
	int op2 = diameter(root->left);
	int op3 = diameter(root->right);
	return max(op1, max(op2, op3));
}

class Pair {
public:
	int height;
	int diameter;
};

Pair fastDiameter(node* root) {
	// base case
	if (!root) {
		Pair p;
		p.height = p.diameter = 0;
		return p;
	}

	// recursive case
	// left={height,diameter}, right={height,diameter}
	Pair left = fastDiameter(root->left);
	Pair right = fastDiameter(root->right);
	Pair p;
	p.height = max(left.height, right.height) + 1;

	int op1 = left.height + right.height;
	int op2 = left.diameter;
	int op3 = right.diameter;
	p.diameter = max(op1, max(op2, op3));
	return p;
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

void mirror(node* root) {
	if (!root) {
		return;
	}

	swap(root->left, root->right);
	mirror(root->left);
	mirror(root->right);
}

node* buildLevelOrder() {
	int data, left, right;
	cout << "Enter the data for root node\n";
	cin >> data;
	if (data == -1) return NULL;
	node* root = new node(data);
	queue<node*> q;

	q.push(root);
	while (!q.empty()) {
		node* f = q.front();
		q.pop();

		cout << "Enter children of " << f->data << " : ";
		cin >> left >> right;
		if (left != -1) {
			f->left = new node(left);
			q.push(f->left);
		}
		if (right != -1) {
			f->right = new node(right);
			q.push(f->right);
		}
	}

	return root;
}


int pre[] = {8, 10, 1, 6, 3, 14 };
int k = 0;

node* TreeCreate(int *in, int s, int e) {
	if (s > e) {
		return NULL;
	}

	node* root = new node(pre[k++]);
	int indx = -1;
	for (int i = s; i <= e; ++i)
	{
		if (in[i] == root->data) {
			indx = i;
			break;
		}
	}

	root->left = TreeCreate(in, s, indx - 1);
	root->right = TreeCreate(in, indx + 1, e);
	return root;
}

// Input: 8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
int main() {

	// node* root = buildTree();
	// node* root = buildLevelOrder();
	int in[] = {1, 10, 6, 8, 3, 14};
	node* root = TreeCreate(in, 0, 5);

	preorder(root);
	cout << endl;
	inorder(root);
	cout << endl;
	postorder(root);
	cout << endl;
	// cout << "Total Nodes: " << countNodes(root) << endl;
	// cout << "Height: " << height(root) << endl;
	// cout << "Diameter: " << diameter(root) << endl;

	// Pair ans = fastDiameter(root);
	// cout << "Fast Height: " << ans.height << endl;
	// cout << "Fast Diameter: " << ans.diameter << endl;
	printLevelOrder(root);
	mirror(root);
	printLevelOrder(root);


	return 0;
}
















