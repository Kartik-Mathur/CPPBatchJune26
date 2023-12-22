#include <iostream>
#include <vector>
using namespace std;

int main() {

	vector<int> v;

	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);

	for (auto el : v) {
		cout << el << " ";
	}
	cout << endl;

	return 0;
}
















