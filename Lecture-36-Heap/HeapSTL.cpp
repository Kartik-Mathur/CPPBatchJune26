#include <iostream>
#include <queue>
#include <functional>
using namespace std;

// priority_queue == heap
class cmp {
public:
	bool operator()(int a, int b) { // Functor
		return a > b;
	}
};

int main() {

	// priority_queue<int> h; // Maxheap
	// priority_queue<int, vector<int>, cmp> h; // Minheap
	// priority_queue<int, vector<int>, greater<int> > h; // Minheap
	priority_queue<int, vector<int>, less<int> > h; // Maxheap

	h.push(9);
	h.push(2);
	h.push(1);
	h.push(0);
	h.push(3);
	h.push(5);

	while (!h.empty()) {
		cout << h.top() << " ";
		h.pop();
	}

	cout << endl;

	return 0;
}
















