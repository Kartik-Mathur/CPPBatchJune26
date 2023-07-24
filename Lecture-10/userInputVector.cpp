#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> v) {

	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << " ";
	}
	cout << endl;
}

void update(vector<int> &v) {

	for (int i = 0; i < v.size(); ++i)
	{
		v[i] += 100;
	}
}

int main() {

	int n;
	cin >> n;

	vector<int> v(n, -10);

	// for (int i = 0; i < n; ++i)
	// {
	// 	cin >> v[i];
	// }
	// update(v);

	print(v);
	cout << v.capacity() << endl;
	v.push_back(10);
	cout << v.capacity() << endl; // 2*n


	return 0;
}