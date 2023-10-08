#include <iostream>
#include <queue> // STL: Standard Template Library
using namespace std;

int main() {

	queue<int> q;

	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);

	while (!q.empty()) {
		cout << q.front() << " ";
		q.pop();
	}
	cout << endl;


	return 0;
}
















