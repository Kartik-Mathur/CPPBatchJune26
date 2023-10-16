#include <iostream>
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

// int countNodes(node* root) {
// 	if (!root) return 0;

// 	return countNodes(root->left) + countNodes(root->right) + 1;
// }

int countNodes(node* root) {

	return (!root) ? 0 : countNodes(root->left) + countNodes(root->right) + 1;
}

// int height(node* root) {
// 	if (!root) return 0;

// 	return max(height(root->left), height(root->right)) + 1;
// }

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

// Input: 8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
int main() {

	node* root = buildTree();

	preorder(root);
	cout << endl;
	inorder(root);
	cout << endl;
	postorder(root);
	cout << endl;
	cout << "Total Nodes: " << countNodes(root) << endl;
	cout << "Height: " << height(root) << endl;
	cout << "Diameter: " << diameter(root) << endl;

	return 0;
}
















