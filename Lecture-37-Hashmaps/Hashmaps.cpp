#include <iostream>
using namespace std;

class node {
public:
	int data;
	string key;
	node* next;

	node(string k, int d) {
		key = k;
		data = d;
	}
};

class hashmap {
	int hashFunction(string s) {
		int ans = 0, mul = 1;
		for (int i = 0; i < s.size(); ++i)
		{
			ans += ( (s[i] % ts) *  (mul % ts) ) % ts;
			mul = ( (mul % ts) * (37 % ts) ) % ts;

		}
		return ans % ts;
	}

	void rehashing() {
		// Purane array ka data kaam ka hai toh memory leak se bachane ke liye
		// store krna padega
		node** olda = a;
		int oldts = ts;

		// new array banaya of 2*ts size ka
		a = new node*[2 * ts];
		ts = ts * 2;

		// cs <- ko zero krna padega, kyunki yeh a[] mei kitne elements hai yeh
		// denote krta hai
		// meine a[] double size ka new wala banaya h, therefore, cs = 0
		cs = 0;
		for (int i = 0; i < oldts; ++i)
		{
			node* head = olda[i];

			while (head != NULL) {
				insert(head->key, head->data);
				head = head->next;
			}
		}
	}
public:
	node** a;
	int ts;
	int cs;
	hashmap(int t = 7) {
		a = new node*[t];
		ts = t;
		cs = 0;
		for (int i = 0; i < ts; ++i)
		{
			a[i] = NULL; // Har bucket node* ki hai,
			// to empty bucket mei NULL hona chahiye
		}
	}

	void insert(string key, int value) {
		// 1. key ko integer mei convert krna padega
		int hashIndex = hashFunction(key);

		// 2. We need to store the key and value node and hashIndex of array a[]
		node* n = new node(key, value);
		n->next = a[hashIndex];
		a[hashIndex] = n;
		cs++;

		float load_factor = cs / (ts * 1.0);
		if (load_factor > 0.5) {
			rehashing(); // agar table 50% se jyada full hai
		}

	}

	void print() {
		for (int i = 0; i < ts; ++i)
		{
			cout << i << "-->";
			node* head = a[i];

			while (head != NULL) {
				cout << "(" << head->key << ", " << head->data << ") ";
				head = head->next;
			}
			cout << endl;
		}
	}
};

int main() {

	hashmap h;

	h.insert("Mango", 100);
	h.insert("Apple", 150);
	h.insert("Mausmi", 90);
	h.insert("Guava", 900);

	h.print();

	return 0;
}
















