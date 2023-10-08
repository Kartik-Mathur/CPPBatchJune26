#include <iostream>
using namespace std;

template<typename T>
class Queue {
	T *a;
	int f, e, cs, n;
public:

	Queue(int size) {
		n = size;
		a = new T[n];
		f = cs = 0;
		e = n - 1;
	}

	void push(T d) {
		if (cs < n) {
			e = (e + 1) % n;
			a[e] = d;
			cs++;
		}
		else {
			cout << "Overflow\n";
		}
	}

	void pop() {
		if (cs > 0) {
			f = (f + 1) % n;
			cs--;
		}
		else {
			cout << "Underflow\n";
		}
	}

	T front() {
		return a[f];
	}

	bool empty() {
		return cs == 0;
	}

	int size() {
		return cs;
	}
};

int main() {

	Queue<int> q(4);
	// q.push('A');
	// q.push('B');
	// q.push('C');
	// q.push('D');
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	// q.push(5);

	while (!q.empty()) {
		cout << q.front() << " ";
		q.pop();
	}
	cout << endl;

	// q.pop();

	return 0;
}
















