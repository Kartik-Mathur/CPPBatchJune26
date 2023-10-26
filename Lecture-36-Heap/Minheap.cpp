#include <iostream>
#include <vector>
using namespace std;

class Minheap
{
	void heapify(int indx) {
		int left = 2 * indx;
		int right = left + 1;

		int min = indx;
		if (left < v.size() and v[left] < v[min]) min = left;
		if (right < v.size() and v[right] < v[min]) min = right;

		if (min != indx) { // base case
			swap(v[min], v[indx]);
			heapify(min);
		}
	}
public:
	vector<int> v;
	Minheap() {
		v.push_back(-1); // 0th index par kch random value daal do
		// taaki uspr data na jaaye koi bhi
	}

	void push(int data) { // insertion done
		v.push_back(data);
		int indx = v.size() - 1;
		int p = indx / 2;
		while (p > 0 and v[p] > v[indx]) {
			swap(v[p], v[indx]);
			indx = p;
			p /= 2;
		}
	}

	int top() {
		return v[1]; // search done
	}

	// Deletion ko implement
	void pop() {
		swap(v[1], v[v.size() - 1]);
		v.pop_back();
		heapify(1);
	}

	bool empty() {
		return v.size() == 1;
	}
};

int main() {

	Minheap h;

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
















