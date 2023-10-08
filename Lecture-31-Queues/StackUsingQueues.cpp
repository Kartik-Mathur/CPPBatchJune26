#include <iostream>
#include <queue>
using namespace std;

class Stack {
	queue<int> q1;
	queue<int> q2;
public:

	void push(int d) {
		if (q1.empty() and q2.empty()) {
			q1.push(d);
		}
		else if (!q1.empty() and q2.empty()) {
			q1.push(d);
		}
		else {
			q2.push(d);
		}
	}

	bool empty() {
		if (q1.empty() and q2.empty()) {
			return true;
		}
		return false;
	}

	int top() {
		if (!q1.empty() and q2.empty()) {
			while (q1.size() > 1) {
				int f = q1.front();
				q1.pop();
				q2.push(f);
			}
			int top = q1.front();
			q1.pop();
			q2.push(top);
			return top;
		}
		else {
			while (q2.size() > 1) {
				int f = q2.front();
				q2.pop();
				q1.push(f);
			}
			int top = q2.front();
			q2.pop();
			q1.push(top);
			return top;
		}
	}

	void pop() {
		if (!q1.empty() and q2.empty()) {
			while (q1.size() > 1) {
				int f = q1.front();
				q1.pop();
				q2.push(f);
			}

			q1.pop();
		}
		else {
			while (q2.size() > 1) {
				int f = q2.front();
				q2.pop();
				q1.push(f);
			}
			q2.pop();
		}
	}
};

int main() {

	Stack s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);

	while (!s.empty()) {
		cout << s.top() << " ";
		s.pop();
	}

	cout << endl;

	return 0;
}
















